#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {

  const char* cString = "c test";
  std::string cppString = "c++ test";

  // c-style strings
  char* cStringCopy = (char*)std::malloc(sizeof(char) * (strlen(cString) + 1));
  strncpy(cStringCopy, cString, strlen(cString));
  std::cout << cStringCopy << std::endl;

  // cpp-style strings
  std::string cppStringCopy = cppString; 
  std::cout << cppStringCopy << std::endl;

}
