
@echo off
if not exist bin mkdir bin
cd bin
del *.exe
cd..

call ..\..\LibRT_x64\LibRT_win @MainDemo.args -static  -c MainDemo_BuildAll_pack.cpp -o MainDemo_BuildAll_pack.o -ftime-report
call ..\..\LibRT_x64\LibRT_win  @MainDemo.args -s -o bin\MainDemo_pack.exe MainDemo_BuildAll_pack.o
echo.
call  bin\MainDemo_pack.exe
pause