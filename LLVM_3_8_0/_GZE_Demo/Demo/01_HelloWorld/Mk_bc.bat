if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_bc HelloWorld.cpp -o bin\HelloWorld.bc
call ..\..\LibRT_x64\LibRT bin/HelloWorld.bc
pause
