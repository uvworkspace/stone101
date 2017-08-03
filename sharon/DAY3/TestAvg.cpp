#include <iostream>
using namespace std;

void exam(int ch, int en) {
  cout << "Chinese:" << ch << "English:" << en << endl;
  int  x = (ch+en)/2;
  cout << "Avg:" << x << endl;
  
}

int main() {
  int ch, en;
  cin >> ch >> en ;


 exam(ch, en);
}