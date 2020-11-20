@echo off
echo  ---  Build Packed ---
%~dp0Build\clang++ -target i686-pc-mingw32 -x c++-header -E  -P  -I %~dp0Build\..\include\ %* 
echo  ---  Finished ---