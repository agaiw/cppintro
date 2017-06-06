#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <algorithm>

int main(int argc, char* argv[]) {

  // c-style strings
  char* cString = "c test";
  int len = strlen(cString);
  char* cStringRevert = (char*)std::malloc(sizeof(char) * (len + 1));
  strcpy(cStringRevert, cString);
  int ch;
  char* i;
  char* j;

  for (i = cStringRevert, j = (cStringRevert + len - 1); i < j; ++i, --j) {
    ch = *i;
    *i = *j;
    *j = ch;
  }

  std::cout << cStringRevert << std::endl;

  // cpp-style strings
  std::string cppStringRevert = "c++ test";
  std::reverse(cppStringRevert.begin(), cppStringRevert.end()); 
  std::cout << cppStringRevert << std::endl;

}
