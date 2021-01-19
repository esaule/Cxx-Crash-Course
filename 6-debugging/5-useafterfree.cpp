#include <iostream>

int main () {

  int *a = new int;

  *a = 12;

  std::cout<<"a="<<*a<<"\n";
  
  delete a;

  *a = 17;
  
  std::cout<<"a="<<*a<<"\n";
  
  delete a;

  return 0;  
}
