#include "LrtMin.h"

extern "C" {
	int memcmp( const void * ptr1, const void * ptr2, gzUIntX num );

	int strcmp( const char * str1, const char * str2 );
	int strncmp( const char * str1, const char * str2, gzUIntX num );
	//long int strtol (const char* str, char** endptr, int base); //Convert to integer
	long strtol(const char* str, char** endptr, int base); //Convert to integer

}
