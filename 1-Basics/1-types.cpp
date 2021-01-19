#include <iostream>

int main () {

  int i=12;

  std::cout<<i<<"\n";

  char c = 'f';

  std::cout<<c<<"\n";

  float f = 3.14;

  std::cout<<f<<"\n";
  
  std::string s = "hello world";

  std::cout<<s<<"\n";

  int a;

  std::cout<<a<<"\n"; //a is uninitialized, so could be anything

  bool b = true;

  std::cout<<b<<std::endl;

  // Outputting std::endl and "\n" is often about the same.
  // There can be differences in when the data get flushed the underlying buffer
  // See https://en.cppreference.com/w/cpp/io/manip/endl
  
  return 0; //technically main returns an int, so here it is
  //sometimes used for signaling error codes to the creating process
}
