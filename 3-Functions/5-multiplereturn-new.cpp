#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int, int> f() {
  return std::make_tuple(2,3);
}

//as long as all return statement have the same type, you can use auto
auto f2() {
  return std::make_tuple(3,4);
}

int main () {
  int a;
  int b;
  std::tie(a,b) = f();

  std::cout<<a<<" "<<b<<"\n";

  std::tie(a,b) = f2();

  std::cout<<a<<" "<<b<<"\n";

  std::tie(std::ignore, b) = f();

  std::cout<<a<<" "<<b<<"\n";
  
  return 0;
}
