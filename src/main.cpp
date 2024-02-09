#include "sma.hpp"

#include <iostream>

int main() {
  std::vector<double> vec = {1., 2., 3., 7., 9.};
  auto ans = SMA(vec, 3);

  std::cout << "SMA results\n";

  for (auto i : ans) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  return 0;
}
