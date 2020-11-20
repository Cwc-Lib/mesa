typedef unsigned int size_t; //Todo Test if is 64 or 32 bit
///// External Func ////////
extern "C"{
	int printf (const char*, ...);
	void* malloc(size_t _nSize);
	void* calloc(size_t num, size_t size);
	void* realloc (void* ptr, size_t size);
	void free (void* ptr);
}

int my_func_ptr(int x);
int testFuncPtr(int _nVal);

inline int fAddId(){
static int _nId = 0;
  
  printf("\nAdd id %d ", _nId);
return _nId++;
}

static int nId = 0;

int nGood2 = fAddId();
int nGood = fAddId();

using cfDemo = int (int);

int fAdd(int _nLeft, cfDemo*  _dTest  );




//Other
extern "C"{
	int outsideFunc(int _nVal);
}
///////////////////////////


/////////  Entry ////////
//gzUIntX _nInstanceId, gzStr _sArg, gzUIntX _nCmd
extern "C" int Jit_Main(cfDemo* _dTest) { //Jit entry

  //  _dTest(10);

  char* buffer = (char*) malloc(50);
  buffer[0] = 'A';
  buffer[1] = 'B';
  buffer[2] = 'C';
  buffer[3] = 0;
  
  
  printf("\nMy malloc %s ", buffer);
  
  printf("\nTest goood yes %d ", nGood);
    free(buffer);
  return outsideFunc(8);
  
}
/*
int main() { //If compiled to exe
    Jit_Main(0);
}*/
/////////////////////////

int _nGlobal = 565;
static int _nAss = 6;
const char myStr[] = "A Fuckin g string";
//static int _nGlobal = 6; //Must be static

//Func ptr test ///
int my_func_ptr(int x){
 return x / 2;
}


int testFuncPtr(int _nVal){
    int (*foo)(int);
    foo = &my_func_ptr;

    return foo( _nVal);
}

int fAdd(int _nLeft,  cfDemo*  _dTest  ) {
     int _nTest = 54 + _nAss + myStr[2];
    //return   _dTest((int)&_nTest);
    return   _dTest((int)&_nGlobal);
 // return testFuncPtr(_nLeft) + _nRight ;
}
