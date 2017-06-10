#include <iostream>
#include <vector>
#define SIZE1 3
#define SIZE2 3

int main(int argc, char* argv[]) {
  //c style
  int cv1[SIZE1] = {3, 4, 5};
  int cv2[SIZE2] = {5, 6, 7};
  int cv1v2[SIZE1 + SIZE2];
  for (int i = 0; i < SIZE1; ++i) {
    cv1v2[i] = cv1[i];
  }
  for (int i = SIZE1; i < (SIZE1 + SIZE2); ++i) {
    cv1v2[i] = cv2[i - SIZE1];
  }
 
  for (int i = 0; i < (SIZE1 + SIZE2); ++i) {
    std::cout << cv1v2[i] << " ";
  }
  std::cout << std::endl;


  //c++ style
  std::vector<int> v1 {1, 2, 3};
  std::vector<int> v2 {1, 2, 5};
  std::vector<int> v1v2;
  v1v2.reserve(v1.size() + v2.size());
  v1v2.insert(v1v2.end(), v1.begin(), v1.end());
  v1v2.insert(v1v2.end(), v2.begin(), v2.end());

  for (auto element: v1v2) {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  return 0;
}
