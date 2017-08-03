#include <iostream>
using namespace std;

int check(int num){
  int x=num;
  int a=x%10;
  int b=(x/10)%10;
  int c=(x/100)%10;
  int d=(x/1000);
  if ((d+b+c)%7==a)
  cout << "yes" << endl;
  else
  cout << "no" << endl;
}

int main() {
  int num;
  cin >> num;
  check(num);
  cin >> num;
  check(num);
}