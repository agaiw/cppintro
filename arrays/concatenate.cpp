#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {

  std::vector<int> v1 {1, 2, 3};
  std::vector<int> v2 {1, 2, 5};
  std::vector<int> v1v2;
  v1v2.reserve(v1.size() + v2.size());
  v1v2.insert(v1v2.end(), v1.begin(), v1.end());
  v1v2.insert(v1v2.end(), v2.begin(), v2.end());

  for (auto i: v1v2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
