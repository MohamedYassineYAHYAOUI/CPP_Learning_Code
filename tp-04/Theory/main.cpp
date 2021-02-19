
#include <iostream>

class A {
  int x;
  virtual void some_function() {}
};

class B {
  int x;
  void some_function() {}
};


int main()
{   
    A a;
    B b;
    std::cout << sizeof(a) << std::endl ; // pk virtual est 16 ? 


    std::cout << sizeof(b) << std::endl ; 
    return 0;
}