del MainDemo_BuildAll.ll
E:
cd E:\FlashDev\_MyProject\Simacode\LDK\LinxDemo\_out\_MainDemo\Lite\ExportCpp
D:\_MyLLVM_3_8_0\_Demo\clang_3_8 @MainDemo.args -target i686-pc-mingw32-elf -DGZ_tJit -S MainDemo_BuildAll.cpp -emit-llvm -o D:\_MyLLVM_3_8_0\_Demo\MainDemo_BuildAll.ll
D:
cd D:\_MyLLVM_3_8_0\_Demo
if not exist "MainDemo_BuildAll.ll" pause
IrDemo32_opt.exe MainDemo_BuildAll.ll
pause
