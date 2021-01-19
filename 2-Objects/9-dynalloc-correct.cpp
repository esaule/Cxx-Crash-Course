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

  B(const B& b) {
    a = new A(*(b.a)); //deep copy of A
  }
  
  ~B() {
    delete a;
    std::cout<<"B::dtor()\n";    
  }
  
};

B f2() {
  B b;
  std::cout<<"&(b.a->something)="<<&(b.a->something)<<"\n";
  
  return b;
}

int main () {

  B bar = f2();

  std::cout<<"&(bar.a->something)="<<&(bar.a->something)<<"\n";

  // This is actually a little bit more complicated than it looks.
  // The compiler is allowed to optimize the placement of B to avoid a copy.

  B foo (bar);

  std::cout<<"&(foo.a->something)="<<&(foo.a->something)<<"\n";

  // If you are not up to speed on assignment operator, copy constructors, and move constructor,
  /// check out the rule of three, five, and zero: https://en.cppreference.com/w/cpp/language/rule_of_three
  
  return 0;
}
