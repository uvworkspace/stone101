#include <iostream>
#include <string>
using namespace std;
void test(string a, string b){
  cout << a.compare(b) << endl;
}

int main() {
  string A, B;
  A = "abc";
  B = "ABC";
  test(A,B);
  A = "stone";
  B = "stone";
  test(A,B);
  A = "aBC";
  B = "acc";
  test(A,B);
}