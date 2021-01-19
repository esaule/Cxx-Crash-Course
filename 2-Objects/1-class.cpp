#include <iostream>

class A {
  int secret;
  
private:
  int foo;
  
public:
  
  int something;

  void do_it() {
    this->foo = 12;
  }

  int my_foo() {
    return foo; //this-> is optional
  }
  
}; //yes this semi colon is necessary

struct B {

  int not_so_secret;
  
private:
  int foo;
  
public:
  
  int something;

  void do_it() {
    this->foo = 12;
  }

  int my_foo() {
    return foo; //this-> is optional
  }
    
};

int main() {

  A a;
  a.something = 12;
  a.do_it();

  std::cout<<a.my_foo()<<"\n";
  
  B b;
  b.something = 12;
  b.do_it();

  std::cout<<b.my_foo()<<"\n";

  //a.secret = 12; //compilation error secret is private in a

  b.not_so_secret = 12;
  
  return 0;
}
