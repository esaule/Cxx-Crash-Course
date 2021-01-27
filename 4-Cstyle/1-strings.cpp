#include <iostream>
#include <cstring>

int main (int argc, char** argv) {

  std::cout<<argv[0]<<"\n";
  
  for (int i=0; argv[0][i]!='\0'; ++i)
    std::cout<<argv[0][i];
  std::cout<<"\n";

  if (strcmp(argv[0], "./1-strings") == 0)
    std::cout<<"yes, it is\n";
  else    
    std::cout<<"no, it is not\n";

  std::string s(argv[0]);
  if (s == "./1-strings")
    std::cout<<"yes, it is\n";
  else    
    std::cout<<"no, it is not\n";

  if (argv[0] == "./1-strings")
    std::cout<<"yes, it is\n";
  else    
    std::cout<<"no, it is not\n";


  //appending to argv[0] is impossible, there is no memory available after the \0.
  //so you would have to create a new dynamic memory allocation, copy things there.
  //append what you want.
  //and all previous pointer to argv[0] would now point to the wrong place.
  // or

  s.append ("foo!");

  std::cout<<s<<"\n";
  
  
  return 0;
}
