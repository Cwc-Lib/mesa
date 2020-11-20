#ifndef tHDef_Lib_GZ_Windows
#define tHDef_Lib_GZ_Windows

#ifdef tLibExport_Lib_GZ_Windows
	#define tApi_Lib_GZ_Windows __declspec(dllexport)
#elif tLibImport_Lib_GZ_Windows
	#define tApi_Lib_GZ_Windows __declspec(dllimport)
#else
	 #define tApi_Lib_GZ_Windows
#endif

#include "Lib_GZ/GzOverplace.h"
#include "Lib_GZ/Macro.h"
GZ_mHLib(Lib_GZ_Windows)
#endif