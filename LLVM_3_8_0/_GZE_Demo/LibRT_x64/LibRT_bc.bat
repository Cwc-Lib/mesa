@echo off
echo  ---  Build LLVM IR (Binary Format) ---
%~dp0Build\clang++ -std=c++11-m32 -fno-exceptions -DGZ_tJit -DGZ_tLibRT -target i686-pc-mingw32-elf -c -emit-llvm %*
echo  ---  Finished ---