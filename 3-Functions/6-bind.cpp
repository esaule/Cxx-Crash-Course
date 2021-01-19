#include <iostream>
#include <functional>
#include <cmath>

void f (int a, int b) {
  std::cout<<a<<" "<<b<<"\n";
}


double g(double x) {
  return std::cos(x);
}

double differenciate( double (*func)(double), double x, double step) {
  return (func(x+step)-func(x)) / step;
}

int main () {

  int a = 2;
  int b = 3;
  
  f(a, b);

  //check https://en.cppreference.com/w/cpp/utility/functional/bind for details
  
  auto foo = std::bind(f, std::placeholders::_1, b);

  foo(a);

  std::cout<<differenciate(g, 0, 0.0001)<<"\n";

  auto dg = std::bind(differenciate, g, std::placeholders::_1, 0.00001);

  std::cout<<dg(0)<<"\n";
  
  
  return 0;
}
