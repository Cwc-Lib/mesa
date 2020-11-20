int my_func_ptr(int x);
int testFuncPtr(int _nVal);

int nGood = 5;

using cfDemo = int (int);

int fAdd(int _nLeft, cfDemo*  _dTest  );


///// External Func ////////
extern "C" int outsideFunc(int _nVal);
extern "C" int printf (const char*, ...);
///////////////////////////


/////////  Entry ////////
extern "C" int test_func(cfDemo* _dTest) { //Jit entry

  //  _dTest(10);
printf("\nTest goood yes %d ", 55);
    return fAdd(5, (cfDemo*)_dTest);

//    return cos(2.5);
 // int _nTotal = fAdd(_nTest, 8);

  return outsideFunc(8);
}
int main() { //If compiled to exe
    test_func(0);
}
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
