//Minimal Example Hello World With LibRT
#include <LibRT.h>
#include <Main>

gzInt Main(gzText8 _sArg, gzUIntX _nId, gzInt _nCmd){
	printf("Hello World\n");
	return 1; // 1 Still Alive, 0 Stop, < 0 Errors
}
gzInt Update(gzFloat _nDelta){
	static gzInt _nCount = 0;
	printf("Update: %d\r", _nCount);
	_nCount++;
	return 1; // 1 Still Alive, 0 Stop, < 0 Errors
}