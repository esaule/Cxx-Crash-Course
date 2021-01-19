#include <iostream>

class A {
public:
  virtual void f() {
    std::cout<<"A::f\n";
  }
  
  virtual ~A() {}
};

class B: public A {
public:
  virtual void f() {
    std::cout<<"B::f\n";
  }

  virtual ~B() {}
};

int main () {

  A a;

  a.f();
  
  B b;

  b.f();
  
  A& ra = a;

  ra.f();

  A& rb = b;

  rb.f();
  
  //B& e = a; //compilation error

  //works with pointers too
  
  return 0;
}
