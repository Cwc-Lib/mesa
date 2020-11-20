#include "LrtMin.h"


extern "C" {

	#ifndef _FILE_DEFINED
	#define	_FILE_DEFINED
	typedef struct _iobuf
	{
		char*	_ptr;
		int	_cnt;
		char*	_base;
		int	_flag;
		int	_file;
		int	_charbuf;
		int	_bufsiz;
		char*	_tmpfname;
	} FILE;
	#endif


	int printf ( const char * format, ... );
	int wprintf (const wchar_t* format, ...);
	
	size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
	int fclose ( FILE * stream );
	
}