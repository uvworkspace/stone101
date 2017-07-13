#include <iostream>
#include <iomanip>
int main() {
  int result = 1;
  while(result <= 1000000000) {
    std::cout << std::setw(10) << result << '\n';
    result *= 10;
  }
}
