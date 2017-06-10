#include <iostream>

// original code cannot be compiled because when
// explicit copy constructor is defined,
// all default constructors are not available
// and normal constructor also needs to be defined explicitly

struct MyType {
  MyType() {};                // normal constructor
  MyType(const MyType& t);    //copy constructor
};

int main(int argc, char* argv[]) {

  MyType a;

}
