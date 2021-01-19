#include <iostream>

int g;

void f (int x) {
  int a;
  std::cout<<"&a="<<&a<<"\n";
  std::cout<<"&g="<<&g<<"\n";
  if (x > 0)
    f(x-1);
}


class A {
public:
  int something;
  A() {
    std::cout<<"A::Constructor\n";
  }
  ~A() {
    std::cout<<"A::Destructor\n";
  }
};

class Ag {
public:
  int something;
  Ag() {
    std::cout<<"Ag::Constructor\n";
  }
  ~Ag() {
    std::cout<<"Ag::Destructor\n";
  }
};


Ag Aglobal;

void f2(int x) {
  A a;
  std::cout<<"&a.something="<<&a<<"\n";
  if (x > 0)
    f2(x-1);
}

int main () {
  f (5);
  f2 (5);
}
