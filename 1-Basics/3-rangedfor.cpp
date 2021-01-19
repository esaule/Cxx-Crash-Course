#include <iostream>
#include <vector>
#include <list>

int main () {
  std::vector<int> v {3,2,1};

  //also accepted :
  // std::vector<int> v = {3,2,1};
  //or:
  // std::vector<int> v;
  // v.push_back(3); v.push_back(2); v.push_back(1);

  std::cout<<"for\n";
  
  for (int i = 0; i< v.size(); ++i) {
    std::cout<<v[i]<<"\n";
  }

  std::cout<<"ranged for\n";
  
  for (int val: v) {
    std::cout<<val<<"\n";
  }

  std::cout<<"on list\n";
  
  std::list<int> l {6,5,4};
  for (int val: l) {
    std::cout<<val<<"\n";
  }

  std::cout<<"on strings\n";
  
  std::string s = "something";

  for (char val: s) {
    std::cout<<val<<"\n";
  }


  return 0;
}
