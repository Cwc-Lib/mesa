#ifndef tHDef_Lib_GZ_WinOpenGL
#define tHDef_Lib_GZ_WinOpenGL

#ifdef tLibExport_Lib_GZ_WinOpenGL
	#define tApi_Lib_GZ_WinOpenGL __declspec(dllexport)
#elif tLibImport_Lib_GZ_WinOpenGL
	#define tApi_Lib_GZ_WinOpenGL __declspec(dllimport)
#else
	 #define tApi_Lib_GZ_WinOpenGL
#endif

#include "Lib_GZ/GzOverplace.h"
#include "Lib_GZ/Macro.h"
GZ_mHLib(Lib_GZ_WinOpenGL)
#endif