/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef HDEF_INC_CRTDEFS
#define HDEF_INC_CRTDEFS

#include "GzTypes.h"


#ifdef __ERRCODE_DEFINED_MS
	typedef int errcode;
#endif

#ifndef _SIZE_T_DEFINED
	#define _SIZE_T_DEFINED
	#undef size_t
	#ifdef _WIN64
		typedef unsigned __int64 size_t;
	#else
		typedef unsigned int size_t;
	#endif /* _WIN64 */
#endif /* _SIZE_T_DEFINED */

#ifndef _SSIZE_T_DEFINED
	#define _SSIZE_T_DEFINED
	#undef ssize_t
		
	#ifdef _WIN64
		typedef __int64 ssize_t;
	#else
		typedef int ssize_t;
	#endif /* _WIN64 */
#endif 

#ifndef _INTPTR_T_DEFINED
	#define _INTPTR_T_DEFINED
	#ifndef __intptr_t_defined
		#define __intptr_t_defined
		#undef intptr_t
		#ifdef _WIN64
			typedef __int64 intptr_t;
		#else
			typedef int intptr_t;
		#endif /* _WIN64 */
	#endif /* __intptr_t_defined */
#endif /* _INTPTR_T_DEFINED */

#ifndef _UINTPTR_T_DEFINED
	#define _UINTPTR_T_DEFINED
		#ifndef __uintptr_t_defined
			#define __uintptr_t_defined
			#undef uintptr_t
			#ifdef _WIN64
				typedef unsigned __int64 uintptr_t;
			#else
				typedef unsigned int uintptr_t;
		#endif /* _WIN64 */
	#endif /* __uintptr_t_defined */
#endif /* _UINTPTR_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
	#define _PTRDIFF_T_DEFINED
	#ifndef _PTRDIFF_T_
		#define _PTRDIFF_T_
		#undef ptrdiff_t
		#ifdef _WIN64
			typedef __int64 ptrdiff_t;
		#else
			typedef int ptrdiff_t;
		#endif /* _WIN64 */
	#endif /* _PTRDIFF_T_ */
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
	#if !defined(__cplusplus) && !defined(__WIDL__)
		typedef unsigned short wchar_t;
	#endif /* C++ */
#endif /* _WCHAR_T_DEFINED */

#ifndef _WCTYPE_T_DEFINED
	#define _WCTYPE_T_DEFINED
	#ifndef _WINT_T
		#define _WINT_T
		typedef unsigned short wint_t;
		typedef unsigned short wctype_t;
	#endif /* _WINT_T */
#endif /* _WCTYPE_T_DEFINED */

#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
	typedef int errno_t;
#endif

#ifndef _TIME32_T_DEFINED
#define _TIME32_T_DEFINED
	typedef long __time32_t;
#endif

#ifndef _TIME64_T_DEFINED
#define _TIME64_T_DEFINED
 typedef gzInt64 __time64_t;
#endif /* _TIME64_T_DEFINED */


#ifndef _TIME_T_DEFINED
	#define _TIME_T_DEFINED
	#ifdef _USE_32BIT_TIME_T
		typedef __time32_t time_t;
	#else
		typedef __time64_t time_t;
	#endif
#endif /* _TIME_T_DEFINED */


#endif /* _INC_CRTDEFS */
