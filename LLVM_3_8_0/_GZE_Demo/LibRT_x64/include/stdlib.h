#include "LrtMin.h"


extern "C" {

	void* malloc(gzUIntX _nSize);
	void* calloc(gzUIntX num, gzUIntX size);
	void* realloc (void* ptr, gzUIntX size);
	void free (void* ptr);

	void* memcpy ( void * destination, const void * source, gzUIntX num );
	void* memset ( void * ptr, int value, gzUIntX num );

	void qsort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));
	/////////TODO
	//int memcmp( const void * ptr1, const void * ptr2, size_t num );
}