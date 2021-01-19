#include <iostream>


struct myfunctor {
  int context;

  myfunctor(int x)
    :context(x) {
  }
  
  void operator() (){
    std::cout<<"context: "<<context<<"\n";
  }
};



struct myfunctor2 {
  int context;

  myfunctor2(int x)
    :context(x) {
  }
  
  void operator()(double f) {
    std::cout<<"context: "<<context<<" f="<<f<<"\n";
  }
};




int main () {
  myfunctor f(314);
  
  f(); //f isn't a function, but it is an object that defines the () operator and so can be used syntactically as a function

  myfunctor2 f2 = 111;
  f2(12.5);
  
  return 0;  
}
