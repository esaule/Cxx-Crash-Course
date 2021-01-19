#include <iostream>

int main () {
  int a = 12;

  const int b = 13;

  int c = 1;
  
  //b = 14; //compilation error
  
  int * p = &a;

  int const * eastconst = &a;

  //*eastconst  = 14; //compilation error
  
  const int * westconst = &a; //same as eastconst
  
  int * const this_pointer_is_const = &a;

  //thispointerisconst = &c; //compilation error
  *this_pointer_is_const = 9; 

  int const * const const_ptr_to_a_const_int = &a;

  //const_ptr_to_a_const_int = &c; //compilation error
  //*const_ptr_to_a_const_int = 99; //compilation error

  int const & cr = a;

  std::cout<<cr<<"\n";

  //cr = 88; //compilation error
  
}
