#include "LrtMin.h"
#include "stdio.h"

#ifndef HDEF_Assert
	//#include "Lib_GZ/Debugging.h"

	//#define GZ_L(_String) L ## _String
	//inline void GZ_wassert(const wchar_t *_Message,const wchar_t *_File,unsigned _Line){}
	inline void GZ_assert(const char *_Message, const char *_File, unsigned _Line){printf("Assert Fail: %s", _Message);} //temp

	#ifdef NDEBUG
		#define assert(_Expression)
	#else
			#define assert(_Expression) \
			 (void) \
			 ((!!(_Expression)) || \
			  (GZ_assert(#_Expression,__FILE__,__LINE__),0))
	#endif

#endif