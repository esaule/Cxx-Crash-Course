#include <iostream>

int main () {


  int* p = new int[10];

  for (int i=0; i<20; ++i) { //oh no!! bound error
    p[i] = 12;
  }

  delete[] p; //yes this is the correct way to deallocate an array allocated with new int[]
  
  return 0;
}

// There is a tool called "electric fence" that can be useful on occasions

