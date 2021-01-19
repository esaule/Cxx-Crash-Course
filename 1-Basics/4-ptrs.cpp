#include <iostream>

int main () {

  int a = 12;

  int b = 15;

  int *p = &a;

  *p = 30;

  std::cout<<"a="<<a<<"\n";

  std::cout<<"reference\n";
  int& r = a;

  r = 40;
  
  std::cout<<"r="<<r<<"\n";
  std::cout<<"a="<<a<<"\n";
  std::cout<<"*p="<<*p<<"\n";

  std::cout<<"pointers can be remapped\n";
  p = &b;

  *p = 40;
  
  std::cout<<"r="<<r<<"\n";
  std::cout<<"a="<<a<<"\n";
  std::cout<<"b="<<b<<"\n";
  std::cout<<"*p="<<*p<<"\n";
  
  std::cout<<"references can not be remapped\n";

  std::cout<<"really pointers are a way to do indirections\n";
  std::cout<<"p="<<p<<"\n";
  std::cout<<"&a="<<&a<<"\n";
  std::cout<<"&b="<<&b<<"\n";
  //note that the difference between &a and &b is typically 4
  //this is not a coincidence, int are 32 bits, so they are 4 bytes away.
  //but you should not rely on this behavior because it is compiler defined.
  std::cout<<"pointer arithmetic\n";
  std::cout<<"p+1="<<p+1<<"\n"; //yes +1 is +4 because p is int*

  std::cout<<"buffer overflow, underflow, dangling pointers\n";
  *(p+1) = 1; // would most likely change the value of a
  std::cout<<"a="<<a<<"\n";
  std::cout<<"b="<<b<<"\n";
  

  std::cout<<"more indirection\n";
  //wait, does that mean that I can get a pointer to a pointer?
  //you betcha!
  std::cout<<"&p="<<&p<<"\n";
  int **pp = &p;
  *pp = &a;
  **pp = 12;
  std::cout<<"p="<<p<<"\n";
  std::cout<<"a="<<a<<"\n";
  std::cout<<"b="<<b<<"\n";
  
  
  return 0;
}
