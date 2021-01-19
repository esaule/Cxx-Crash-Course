#include <iostream>

class myinterface {
public:
  virtual void interfacefunction() = 0;
};

class A {
public:
  virtual void f() {
    std::cout<<"A::f\n";
  }
  
  virtual ~A() {}
};

class B: public A, public myinterface {
public:
  virtual void f() {
    std::cout<<"B::f\n";
  }

  virtual void interfacefunction() {
    std::cout<<"interfacefunction()\n";
  }
  
  virtual ~B() {}
};

int main () {
  
  B b;

  b.f();
  
  myinterface& rb = b;

  rb.interfacefunction();
    
  return 0;
}
