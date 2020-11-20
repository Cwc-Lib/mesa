
echo  ---  Build Exe  ---
Call %~dp0Build\clang++ -s -Wl,--dynamicbase,--export-all-symbols   -s -m32 -static -target i686-pc-mingw32 -DGZ_tLibRT -std=c++11 -Werror=return-type -DGZ_tWindows  %* -lgdi32 -lopengl32 
echo  ---  Finished ---
