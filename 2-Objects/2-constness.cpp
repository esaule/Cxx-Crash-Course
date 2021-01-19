#include <iostream>

class A {
  int a;
  
public:

  void f() {
    a = 12;
  }

  int g() const {
    //a=13; //compilation error
    
    return a;
  }
};

int main () {
  A a;

  a.f();
  std::cout<<a.g()<<"\n";
  
  return 0;
}
