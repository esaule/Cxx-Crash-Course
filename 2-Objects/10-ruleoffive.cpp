#include <iostream>
#include <memory>


struct RuleOfFive {
  int size;
  int* array;
  
  RuleOfFive() {
    size = 10;
    array = new int[size];
    std::cout<<"RuleOfFive::ctor()\n";
  }

  RuleOfFive(const RuleOfFive& b) {
    std::cout<<"RuleOfFive::copyctor\n";    
    size = b.size;
    array = new int[size];
    for (int i=0; i<size; ++i)
      array[i] = b.array[i];
  }
  
  RuleOfFive(RuleOfFive&& b) {
    std::cout<<"RuleOfFive::movector\n";    
    size  = b.size;
    array = b.array;
    b.array = nullptr;
  }

  RuleOfFive& operator=(RuleOfFive&& b) {
    std::cout<<"RuleOfFive::move-assignment()\n";    
    //clean up this
    if (array != nullptr)
      delete[] array;

    //steal from b
    size  = b.size;
    array = b.array;

    //clean up b
    b.array = nullptr;
    return *this;
  }

  RuleOfFive& operator=(RuleOfFive& b) {
    std::cout<<"RuleOfFive::copy-assignment()\n";    

    //clean up this
    if (array != nullptr)
      delete[] array;

    //copy from b
    size  = b.size;
    array = new int[size];
    for (int i=0; i<size; ++i)
      array[i] = b.array[i];

    //clean up b
    b.array = nullptr;
    return *this;
  }

  
  ~RuleOfFive() {
    if (array != nullptr)
      delete[] array;
    std::cout<<"RuleOfFive::dtor()\n";    
  }
  
};


int main () {

  RuleOfFive rof;
  
  return 0;
}
