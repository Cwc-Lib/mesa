if not exist bin mkdir bin
call ..\..\LibRT_x64\LibRT_bc @MainDemo.args MainDemo_BuildAll.cpp -o bin\MainDemo_BuildAll.bc  -ftime-report
call ..\..\LibRT_x64\LibRT bin/MainDemo_BuildAll.bc
pause
