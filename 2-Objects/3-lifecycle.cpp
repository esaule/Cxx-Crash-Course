#include <iostream>

class A {
public:
  int some;

  A() {
    std::cout<<"constructor A\n";
  }

  ~A() {
    std::cout<<"destructor A\n";
  }
};

class B {
public:
  int some;

  B():some(12) {
    std::cout<<"constructor B\n";
  }
  

  ~B() {
    std::cout<<"destructor B\n";
  }
};

int main() {

  A a;

  for (int i=0; i<3; ++i) {
    B b;
  }
  
  return 0;
}
