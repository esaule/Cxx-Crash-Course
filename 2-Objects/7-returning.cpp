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


A f() {
  A a;
  std::cout<<"&(a.something) = "<< &(a.something)<<"\n";


  a.something = 12;
  return a;
}

struct B {
  A& a;
  
  B(A& la)
    :a(la)
  {}
  
};

B f2() {
  A a;
  B b(a);

  std::cout<<"&(a.something)="<<&(a.something)<<"\n";
  
  return b;
}

int main () {

  A foo;
  foo = f();

  std::cout<<"&(foo.something) = "<< &(foo.something)<<"\n";
  
  std::cout<<foo.something<<"\n";

  B bar = f2();

  std::cout<<"&(bar.a.something)="<<&(bar.a.something)<<"\n"; //ouch!!!
  // Don't put reference/pointers to objects on the stack if you do not know that
  // the pointed object will outlive the reference/pointer
  
  
  return 0;
}
