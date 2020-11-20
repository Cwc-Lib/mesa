#include <iostream>
#include <stdio.h>
#include <llvm-c/IRReader.h>

#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>

#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/MCJIT.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/IR/Module.h>

#include "llvm-c/Core.h"
#include "llvm/IR/Verifier.h"
#include <llvm-c/Analysis.h>


/* SET TRIPLE 2 elf Windows
#include "llvm/Support/Host.h"
#ifdef _WIN32
  auto triple = llvm::sys::getProcessTriple();
  module->setTargetTriple(triple + "-elf");
#endif
*/

#define test_fileEmbed \
"; ModuleID = 'test.c'\n"\
"target triple = \"i686-pc-mingw32\"\n"\
\
"declare i32 @outsideFunc(i32)\n"\
\
"define i32 @test_func() {\n"\
"entry:\n"\
  "%call = call i32 @outsideFunc(i32 156)\n"\
  "ret i32 %call\n"\
"}\n"


using namespace std;
#define prt(x) if(x) { cout << x << endl; }

void fMainDemoLLVM();

extern "C" int outsideFunc(int a){
    printf("\n - Function Called From C  -  Param: %d \n ", a );
  return a;
}

#include <windows.h>



extern "C" bool fStartLLVM(){
    fMainDemoLLVM();
    return false;
}

#ifndef CpcDos
int main(int argc, char **argv){
    fMainDemoLLVM();
    return false;
}
#endif


//Func ptr test ///
int demo_ptr(int x){

    printf("\n -demo_ptr  -  Param: %d \n ", *((int*)x) );
 return x / 2;
}




void fMainDemoLLVM(){



    using namespace llvm;
    bool _bFile = true; //From file or from memory

    #ifdef CpcDos
    _bFile = false; //From memory in CpcDos
    #endif // CpcDos


    const char* _sName = "Param.ll";

    LLVMInitializeAllTargets();
    LLVMInitializeAllTargetMCs();
    LLVMInitializeAllTargetInfos();
    LLVMInitializeAllAsmParsers();
    LLVMInitializeAllAsmPrinters();
    LLVMInitializeAllDisassemblers(); // just initialize them all....

    printf("\nJust to be sure the C fucntion was not optmize it out");
    outsideFunc(1);               // afraid of linker optmize it out
    printf("\n ------------ \n");

    char *err = 0;



  //      LLVMMemoryBufferRef ll_f(test_fileEmbed);
    LLVMMemoryBufferRef ll_f = 0;

    if(_bFile){
        LLVMCreateMemoryBufferWithContentsOfFile(_sName, &ll_f, &err);   //read .ll
    }else{
        ll_f = LLVMCreateMemoryBufferWithMemoryRange(test_fileEmbed, sizeof(test_fileEmbed) - 1, "FileMem", false);   //from memory
    }

    LLVMModuleRef m = 0;


    prt(err);
    LLVMParseIRInContext(LLVMGetGlobalContext(),ll_f,&m,&err); // ll_f doesnt need freeing
    prt(err);
     //LLVMSetTarget(m,"i686-pc-mingw32"); //? If no default
    LLVMDumpModule(m);

    LLVMLinkInMCJIT();
    LLVMExecutionEngineRef ee = 0;
    LLVMCreateMCJITCompilerForModule(&ee,m,0,0,&err);
    prt(err);



    if(LLVMGetNamedFunction(m,"outsideFunc") == 0){
        printf("\Function not found in JIT \n");
    }else{
        printf("\nFound outsideFunc\n");
        LLVMAddGlobalMapping(ee,LLVMGetNamedFunction(m,"outsideFunc"),(void*)(&outsideFunc));
    }

    if(LLVMGetNamedFunction(m,"printf") == 0){
        printf("\Function not found in JIT \n");
    }else{
        printf("\nFound printf\n");
        LLVMAddGlobalMapping(ee,LLVMGetNamedFunction(m,"printf"),(void*)(&printf));
    }
        printf("\ok\n");

    errs() << "\nverifying... ";
    char *error = NULL;
    LLVMVerifyModule(m, LLVMAbortProcessAction, &error);
    LLVMDisposeMessage(error);


    using dDemo = int (int);
    using tf_t = int (dDemo*);

   dDemo* foo = &demo_ptr;


    printf("\n-----GET PTR ------- \n");

    tf_t *f = (tf_t*)LLVMGetPointerToGlobal(ee,LLVMGetNamedFunction(m,"test_func"));





    /*
  //if (verifyFunction(&f)) {
  if (verifyModule(m)) {
    errs() << argv[0] << ": Error constructing function!\n";
    return 1;
  }
*/
    printf("\n--------- Execute JIT: %s ---------- \n", _sName);
    int _nResult = f(foo);
    printf("\n--------- Result : %d     ---------- \n " , _nResult);

}










/*
class Foo
{
    void Bar();
    virtual void Baz();
};

class FooFoo : public Foo
{
    virtual void Baz();
};

Foo* foo = new FooFoo;

const void* barMethodPointer = getMethodPointer(&Foo::Bar);
const void* bazMethodPointer = getMethodPointer(foo, &Foo::Baz); // will get FooFoo::Baz

llvm::ExecutionEngine* engine = llvm::EngineBuilder(module).Create();

llvm::Function* bar = llvm::Function::Create( function type , Function::ExternalLinkage, "foo", module);
llvm::Function* baz = llvm::Function::Create( function type , Function::ExternalLinkage, "baz", module);
engine->addGlobalMapping(bar, const_cast<void*>(barMethodPointer)); // LLVM always takes non-const pointers
engine->addGlobalMapping(baz, const_cast<void*>(bazMethodPointer));
*/
/*
//LLVMRunFunctionAsMain
 LLVMValueRef nTestValue = LLVMConstInt(LLVMInt32Type(), i, 0);
LLVMRunFunctionAsMain(ee, )


    llvm::ExecutionEngine *engine =
    llvm::EngineBuilder( m->get()).create();

    if(engine != 0){
        engine->finalizeObject(); // memory for generated code marked executable:
                              // http://lists.cs.uiuc.edu/pipermail/llvmdev/2013-June/062677.html
        engine->runFunction(main_func, std::vector<llvm::GenericValue>());
    }else{
        std::cerr << "Engine null\n";
    }
*/
/*
	//ExistingModuleProvider* MP = new ExistingModuleProvider(m);
	//ExecutionEngine* EE = ExecutionEngine::create(MP, false);
ExecutionEngine* EE(ee);
    std::vector<GenericValue> noargs;
	GenericValue gv = ee->runFunction(f, noargs);

	std::cout << "Result: " << gv.IntVal.toStringUnsigned(10) << "\n";

*/
