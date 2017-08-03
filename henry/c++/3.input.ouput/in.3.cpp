#include<iostream>
using namespace std;

int main() {
  string a;
  int b = 1;
  while(getline(cin , a)) {
  cout << b <<  " " <<  a << endl;
  b++;
  }
   return 0;
}