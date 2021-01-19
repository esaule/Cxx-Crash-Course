#include <iostream>

struct A {
  int something;

  A() {
    std::cout<<"A::ctor\n";      
  }
  ~A() {
    std::cout<<"A::dtor\n";      
  }  
};

struct B {
  A* a;
  
  B() {
    a = new A();
    std::cout<<"B::ctor()\n";
  }

  ~B() {
    std::cout<<"B::dtor()\n";    
  }
  
};

B f2() {
  B b;
  
  return b;
}

int main () {

  B bar = f2();

  std::cout<<"&(bar.a->something)="<<&(bar.a->something)<<"\n";
  //the underlying a is now deep in the heap
  
  //where did the A destructor go? ==> memory leak.
  
  return 0;
}
