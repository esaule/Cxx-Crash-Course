#include <iostream>
#include <vector>
#include <algorithm>

int main () {

  int a = 12;

  auto f = [&]() {++a;
       };

  auto p = [&]() {
	     std::cout<<"a="<<a<<"\n";
	   };

  // which variables are available to the lambda is kind of
  // complicated, there are many options available depending on what
  // you need to do.
  // Check: https://en.cppreference.com/w/cpp/language/lambda
  
  f();

  p();

  f();

  p();

  
  
  std::vector<int> v;
  for (int i=0; i<10; ++i) {
    v.push_back(rand()%100);
  }

  auto printv = [&](){ 
		  std::for_each(v.begin(), v.end(), [](int& value) {std::cout<<value<<" ";});
		  std::cout<<"\n";
		};

  printv();


  //sort with odd first
  std::sort(v.begin(), v.end(),
	    [](int a, int b) {
	      bool odda = ((a%2) ==  1);
	      bool oddb = ((b%2) ==  1);
	      if (odda && !oddb) {
		return true;
	      }
	      if (oddb && !odda) {
		return false;
	      }
	      return a < b;
	    });
    
  printv();
  
  
  return 0;
}
