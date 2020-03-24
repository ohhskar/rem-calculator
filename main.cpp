#include <iostream>
#include <stdlib.h>

int main(int argc, char **argv) {
  float rootFontSize = 16.0;
  if (argc == 2) {
    rootFontSize = atof(argv[1]);
  } else if (argc > 2) {
    std::cout << "rem-calc: expected at most 1 argument, but got " << argc
              << std::endl;
    return 1;
  }

  while (true) {
    float value;
    std::cin >> value;
    std::cout << (value / rootFontSize) << "rem" << std::endl;
  }
  return 0;
}
