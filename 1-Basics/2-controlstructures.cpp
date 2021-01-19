#include <iostream>

int main () {

  int a = 12;

  if (a == 12) {
    std::cout<<"something\n";
  }

  if (a == 12) 
    std::cout<<"SOMETHING\n";
    
  if (a = 0) {
    std::cout<<"something else\n";
  }
  
  //you'll see them written in reverse too to avoid that
  if (12 == a) {
    std::cout<<"yet an other something\n";
  }

  std::cout<<"while\n";
  
  while (a < 15) {
    std::cout<<"a: "<<a<<"\n";
    
    ++a;
    // Technically ++a and a++ can behave differently on object types
    // see https://en.cppreference.com/w/cpp/language/operator_incdec
    // or https://stackoverflow.com/questions/24901/is-there-a-performance-difference-between-i-and-i-in-c
    // Probably don't need to worry about it too much.
  }

  std::cout<<"do while\n";
  
  do {
    std::cout<<"a: "<<a<<"\n";
    
    ++a;

  } while (a < 20); //yes you need that semi-colon

  std::cout<<"for\n";
  
  for (a=5; a<10; ++a) {
    std::cout<<"a="<<a<<"\n";
  }    
  
  return 0;
}
