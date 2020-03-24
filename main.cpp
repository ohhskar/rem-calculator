#include <iostream>
#include <string>
#define MAX_INPUT 1000

int main(int argc, char **argv) {
  float rootFontSize = 16.0;
  if (argc == 2) {
    rootFontSize = std::stod(std::string(argv[1]));
  } else if (argc > 2) {
    std::cout << "rem-calc: expected at most 1 argument, but got " << (argc - 1)
              << " instead." << std::endl;
    return 1;
  }

  while (true) {
    float value;
    std::cin >> value;
    std::cout << (value / rootFontSize) << "rem" << std::endl;
  }

  return 0;
}
