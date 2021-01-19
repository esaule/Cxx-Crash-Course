#include <iostream>
#include <limits>
#include <cstdint>
#include <vector>

int main () {
  int a = 0 ;

  for (int i=0; i<1000; ++i)
    for (int j=0; j<1000; ++j)
      for (int k=0; k<1000; ++k)
	for (int l=0; l<3; ++l)
	  ++a;

  std::cout<<"a="<<a<<"\n";

  std::cout<<"int range:"
	   <<std::numeric_limits<int>::min()<<" : "
	   <<std::numeric_limits<int>::max()<<"\n";

  
  float f = 0.;

  for (int i=0; i<1000; ++i)
    for (int j=0; j<1000; ++j)
      for (int k=0; k<100; ++k)
	f = f + 1;

  std::cout<<"f="<<f<<"\n";

  // If that surprises you, you should probably read:
  // http://pages.cs.wisc.edu/~david/courses/cs552/S12/handouts/goldberg-floating-point.pdf

  
  int x = 17;
  int y = 5;
  
  std::cout<<x<<"/"<<y<<"="<<x/y<<"\n";
  std::cout<<x<<"%"<<y<<"="<<x%y<<"\n";
  //most operators stay in the more general type

  int32_t a_32_bit_signed_integer;

  uint16_t a_16_bit_unsigned_integer;

  //types can be redefined
  typedef float mycooltype;

  mycooltype l = 1.2;

  auto something = 12/4;
  std::cout<<"something is an int: "<<something<<"\n";

  //something = "hello"; //compilation error, something is an int
  
  auto somethingelse = &something;
  std::cout<<"somethingelse is an int*: "<<somethingelse<<"\n";

  int& ref= something;
  auto foo = ref;

  foo = 9;

  std::cout<<"something:"<<something<<"\n";
  std::cout<<"foo:"<<foo<<"\n"; //foo is NOT a ref, it is an int

  auto& bar = something; //bar is a reference to something
  bar = 555;
  std::cout<<"something:"<<something<<"\n";


  // auto to avoid having to knwo the exact type of things.
  std::vector<int> v;
  std::vector<int>::iterator it = v.begin();
  auto it2 = v.begin();
  
  return 0;
}
