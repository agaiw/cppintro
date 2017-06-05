#include <iostream>
#include <limits>

int main (int argc, char* argv[]) {

  std::cout << "Please enter an integer number." << std::endl;
  int number;
  std::cin >> number;
  while (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Incorrect input. Please enter a valid integer number." << std::endl;
    std::cin >> number;
  }
  std::cout << "dec: " << number << std::endl;
  std::cout << "oct: " << std::oct << number << std::endl;
  std::cout << "hex: " << std::hex << number << std::endl;
  return 0;
}
