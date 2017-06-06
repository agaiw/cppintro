#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[]) {

  std::vector<int> v {1, 2, 3, 4, 5};
  std::reverse(v.begin(), v.end());

  for (auto i: v) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
