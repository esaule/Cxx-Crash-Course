#include <iostream>
#include <vector>

// convention was essentially, if you pass a pointer it is to change the value
// if you don't intend to change the value, pass by copy
// if copy is expensive pass by const reference
int f (int *b) {

  *b = 3;
  return 2;
}

//so you would get
void f2(int small_so_copy_is_fine,
       std::vector<int> const & could_be_big_so_dont_want_a_copy,
       int* returnvalue) {
  //...
}

int main () {
  //very C++98. No real better way of doing this in C++ 98.
  int a;
  int b;
  a = f(&b);

  std::cout<<a<<" "<<b<<"\n";

  return 0;
}
