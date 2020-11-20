
@echo off
if not exist bin mkdir bin
cd bin
del *.exe
cd..

call ..\..\LibRT_x64\LibRT_link  @MainDemo.args -o bin\MainDemo.exe MainDemo_BuildAll.o
echo.
call  bin\MainDemo.exe
pause