#include <stdio.h>

extern "C" int outsideFunc(int _nVal);
/*
int fAdd(int _nLeft, int _nRight  ) {
  return _nLeft + _nRight;
}
*/

extern "C" int Jit_Main() {
printf("machin");
 //return fAdd(5, 8);
	int nTest = 77;
 // return outsideFunc( fAdd(nTest, 8));
  return nTest;
}

