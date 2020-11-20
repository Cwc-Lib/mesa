if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_ll HelloWorld.cpp -o bin/HelloWorld.ll
call ..\..\LibRT_x64\LibRT bin/HelloWorld.ll
pause
