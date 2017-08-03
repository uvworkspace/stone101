#include <iostream>
using namespace std;

void test() {
  int a=2, b=3;
  int answer1 = a/b;
  double answer2 = (double)(a/b);
  double answer3 = (double)a/b;
  // 1. assign a/b to answer1

  // 2. assign (double)(a/b) to answer2

  // 3. assign (double)a/b to answer2

  double realNum = 6.79;
  int intNum2 = (int)realNum;
  // 4. assign realNum to intNum2
  cout << answer1 << endl << answer2 << endl << answer3 << endl << intNum2 << endl;

}
int main() {
  test();
  return 0;
}