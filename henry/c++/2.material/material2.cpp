#include<iostream>
using namespace std;
int main() {
  char ch1 = 'A';
  char ch2 = 'a';
  for (int a=0;a<5;a++) {
    cout << ch1 << ' ';
    ch1++;
   }
   cout << endl;
   for (int b=0;b<5;b++) {
     cout << ch2 << ' ';
     ch2++;
   }
}