#include <iostream>

struct MyType {
  MyType() {};
  MyType(const MyType& rhs) {};
};

MyType getType() {
  return MyType{};
}

int main(int argc, char* argv[]) {
  MyType b;
  MyType a {b};
  MyType c { getType()};


};
