@echo off
echo  ---  Build LLVM IR (Textual Format) ---
%~dp0Build\clang++ -std=c++11 -g -gcodeview  -m32 -fno-exceptions -DGZ_tJit -DGZ_tLibRT -target i686-pc-mingw32-elf -S  -emit-llvm %*
echo  ---  Finished ---