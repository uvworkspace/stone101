#include <iostream>
int main() {
    enum class Number { ZERO, ONE, TWO ,THREE ,FOUR , FIVE };
    std::cout << static_cast<int>(Number::ZERO) << " "
    << static_cast<int>(Number::FIVE) << '\n'; 
}
