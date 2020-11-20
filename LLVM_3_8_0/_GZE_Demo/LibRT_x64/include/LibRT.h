
#ifndef GZ_tLibRT
	#define GZ_tLibRT
#endif

#ifndef LRT_IMPORT
	#define LRT_IMPORT  __declspec(dllimport)
#endif

#ifndef __STRINGIFY
	#define __STRINGIFY(x) #x
#endif

#include "LrtCommun.h"

extern "C" {
	extern gzInt nMainIsAlive; //Default 1 (Alive)
	extern gzInt nMainUpdateMs; //Default 16 (~60 fps if available)
}