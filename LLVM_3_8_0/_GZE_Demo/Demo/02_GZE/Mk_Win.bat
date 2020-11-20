
@echo off
if not exist bin mkdir bin
cd bin
del *.exe
cd..

call ..\..\LibRT_x64\LibRT_win @MainDemo.args -static  -c MainDemo_BuildAll.cpp -o MainDemo_BuildAll.o -ftime-report
call ..\..\LibRT_x64\LibRT_link  @MainDemo.args -Wl,-q -o bin\MainDemo.exe MainDemo_BuildAll.o
echo.
call  bin\MainDemo.exe
pause