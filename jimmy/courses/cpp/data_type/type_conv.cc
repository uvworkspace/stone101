#include <iostream>
using namespace std;

void test() {
  int a=2, b=3;
  int answer1;
  double answer2;
  
  // 1. assign a/b to answer1
  answer1 = a/b; 
  cout << "a=" << a << " b=" << b << " answer1=" << answer1 << endl;
  // 2. assign (double)(a/b) to answer2
  answer2 = (double)(a/b); 
  cout << "a=" << a << " b=" << b << " answer2=" << answer2 << endl;    
  // 3. assign (double)a/b to answer2
  answer2 = (double) a/b; 
  cout << "a=" << (double)a << " b=" << b << " answer2=" << answer2 << endl;

  double realNum = 6.79;
  int intNum2;
  // 4. assign realNum to intNum2
  intNum2 = (int) realNum;
  cout << "realNum=" << realNum << " intNum2=" << intNum2 << endl;
}

int main() {
  test();
  return 0;
}