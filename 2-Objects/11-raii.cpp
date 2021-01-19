#include <iostream>
#include <memory>
#include <vector>

struct Good {
  std::vector<int> array;
  
  Good()
    :array(10) {

    std::cout<<"Good::ctor()\n";
  }
  
};


int main () {

  Good g;

  // you want to use RAII ( https://en.cppreference.com/w/cpp/language/raii ) with all kinds of resources:
  // dynamic memory allocation, file descriptors, network sockets, mutexes, ...
  // If you need dynamic memory allocation, checkout std::unique_ptr and std::shared_ptr
  
  
  return 0;
}
