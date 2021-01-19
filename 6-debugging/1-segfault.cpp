#include <iostream>

int main () {

  int a;

  int* p= &a + 0xDEAD;

  *p = 12;
  
  
  return 0;
}
