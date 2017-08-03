#include <iostream>
using namespace std;

void test() {
  int a=2, b=3;
  int answer1;
  double answer2;
  answer1 = a/b;
  cout << answer1<<endl;
  // 1. assign a/b to answer1
  answer2 = (double)(a/b);
  cout << answer2 << endl;
  // 2. assign (double)(a/b) to answer2
  answer2 = double a/b;
  cout << answer2 << endl;
  // 3. assign (double)a/b to answer2

  double realNum = 6.79;
  int intNum2;
  intNum2 = realNum;
  cout << intNum2 << endl;
  // 4. assign realNum to intNum2

}
int main() {
  test();
  return 0;
}