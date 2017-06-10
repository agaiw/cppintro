#include <iostream>

struct MyType {
  MyType () {};
  MyType (const MyType& rhs) {};
  MyType& operator=(const MyType& rhs) {};
};

int main(int argc, char* argv[]) {
  MyType a, b;

  // c is new object, so copy constructor is called
  MyType c = a;
  // b is existing object, so overloaded assignment operator is used
  b = a;
}
