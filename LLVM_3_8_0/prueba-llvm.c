// clang prueba-llvm.c `llvm-config --cflags --ldflags --libs` -lz -lpthread -ldl -lm -lstdc++ -o prueba-llvm
#include <stdio.h>
#include <stdlib.h>
#include <llvm-c/Core.h>
#include <llvm-c/ExecutionEngine.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

int someFunction()
{
    printf("Calledwww someFunction()\n");
    return 165;
}

int main()
{
    LLVMLinkInMCJIT();
    LLVMInitializeNativeTarget();
    LLVMInitializeNativeAsmPrinter();

    LLVMModuleRef module = LLVMModuleCreateWithName("testModule");

    LLVMTypeRef functionType = LLVMFunctionType(LLVMVoidType(), NULL, 0, 0);
    LLVMValueRef someFunctionPtr = LLVMAddFunction(module, "someFunction", functionType);

    functionType = LLVMFunctionType(LLVMVoidType(), NULL, 0, 0);
    LLVMValueRef function = LLVMAddFunction(module, "theFunction", functionType);

    LLVMBasicBlockRef entry = LLVMAppendBasicBlock(function, "");
    LLVMBuilderRef builder = LLVMCreateBuilder();

    LLVMPositionBuilderAtEnd(builder, entry);
    LLVMBuildCall(builder, someFunctionPtr, NULL, 0, "");
    LLVMBuildRetVoid(builder);

    LLVMDumpModule(module);

    struct LLVMMCJITCompilerOptions opts;
    LLVMInitializeMCJITCompilerOptions(&opts, sizeof(opts));
    opts.OptLevel = 2;
    opts.EnableFastISel = 1;
    opts.NoFramePointerElim = 1;
    opts.CodeModel = LLVMCodeModelJITDefault;

    char *error;
    LLVMExecutionEngineRef engine;

    if (LLVMCreateMCJITCompilerForModule(&engine, module, &opts, sizeof(opts), &error) != 0) {
        fprintf(stderr, "%s\n", error);
        LLVMDisposeMessage(error);
        exit(1);
    }

    LLVMAddGlobalMapping(engine, someFunctionPtr, (void*) someFunction);

            printf("\n Begin \n");
    int (*callFunction)() = (int (*)() )LLVMGetPointerToGlobal(engine, function);



        printf("\n End %d ", callFunction() );
}
