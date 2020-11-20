
extern "C" int outsideFunc(int _nVal);

int fAdd(int _nLeft, int _nRight  ) {
  return _nLeft + _nRight;
}


extern "C" int test_func() {
  int _nTotal = fAdd(5, 8);

  return outsideFunc(_nTotal);
}

