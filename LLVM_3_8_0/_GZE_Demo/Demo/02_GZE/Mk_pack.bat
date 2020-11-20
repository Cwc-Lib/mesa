if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_pack @MainDemo.args MainDemo_BuildAll.cpp -o bin/MainDemo_BuildAll.pack
pause