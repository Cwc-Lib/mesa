if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_ll @MainDemo.args MainDemo_BuildAll.cpp -o bin/MainDemo_BuildAll.ll
call ..\..\LibRT_x64\LibRT bin/MainDemo_BuildAll.ll
pause
