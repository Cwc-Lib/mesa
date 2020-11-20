
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

using namespace llvm;

int some_test_func( int ){
	std::cout << "!!!!" << std::endl;
	return 8848;
}

int main(int argc, char **argv){

	Module *M = new Module("test");
	ExistingModuleProvider* MP = new ExistingModuleProvider(M);
	ExecutionEngine* EE = ExecutionEngine::create(MP, false);

	std::vector<const Type *> func_args;
	func_args.push_back(Type::Int32Ty);
	FunctionType * func_type = FunctionType::get(Type::Int32Ty, func_args, false);
	Function * my_function = Function::Create( func_type,
	Function::ExternalLinkage, "some_test_func", M );
	EE->addGlobalMapping( my_function, (void*)&some_test_func );


	Function *FooF = cast<Function>(M->getOrInsertFunction("foo",Type::Int32Ty, (Type *)0));
	BasicBlock * BB = BasicBlock::Create("EntryBlock", FooF);
	Value *Ten = ConstantInt::get(Type::Int32Ty, 10);
	CallInst *Add1CallRes = CallInst::Create(my_function, Ten,"some_test_func", BB);

	Add1CallRes->setTailCall(true);

	ReturnInst::Create(Add1CallRes, BB);

	std::cout << "We just constructed this LLVM module:\n\n" << *M;
	std::cout << "\n\nRunning foo: " << std::flush;

	std::vector<GenericValue> noargs;
	GenericValue gv = EE->runFunction(FooF, noargs);

	std::cout << "Result: " << gv.IntVal.toStringUnsigned(10) << "\n";
	return 0;
}
