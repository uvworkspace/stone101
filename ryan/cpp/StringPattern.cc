#include <iostream>
using namespace std;

void stringPattern (string str) {
  while (str.length() > 0) {
    int i = str.length();
    while (i != 0) {
      for (int j = 0; j < i; j++) {
        cout << str[j];
      }
      cout << endl;
      i--;
    }
  str = str.substr(1);
  }
}


int main() {
  stringPattern("stone");
}