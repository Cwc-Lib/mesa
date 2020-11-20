@echo off
cd bin
del *.exe
cd..
if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_win HelloWorld.cpp -o bin\HelloWorld.exe
echo.
call  bin\HelloWorld.exe
pause