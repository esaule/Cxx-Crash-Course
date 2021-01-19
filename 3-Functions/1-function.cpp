#include <iostream>

void f1() {
  std::cout<<"f1\n";
}

void f2() {
  std::cout<<"f2\n";
}


void f3(int x) {
  std::cout<<"f3: "<<x<<"\n";
}

void f4(int x) {
  std::cout<<"f4: "<<x<<"\n";
}




int main () {

  f1();
  f2();

  void (*fptr)();

  fptr = f1;
  fptr();

  fptr = f2;
  fptr();
  
  //fptr = f3; //compilation error

  void (*fptr2)(int);
  
  fptr2 = f3;
  fptr2(314);

  fptr2 = f4;
  fptr2(314);

  auto fptr3 = f3;

  fptr3 (628);

  fptr3 = f4;

  fptr3(628);

  //fptr3 = f1; //compilation error
  
  return 0;  
}
