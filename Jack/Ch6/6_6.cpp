#include <iostream>
using namespace std;
int main(){
  int result = 1;
  while(result <= 1000000000) {
    cout << result << '\n';
    result *= 10;
  }
}
