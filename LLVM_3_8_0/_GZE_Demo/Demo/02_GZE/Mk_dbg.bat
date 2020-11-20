if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_dbg @MainDemoWin.args MainDemo_BuildAll.cpp -o bin/MainDemo_BuildAll.dbg
pause