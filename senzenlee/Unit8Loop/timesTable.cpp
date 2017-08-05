#include <iostream>
using namespace std;
int table(int size) {
  if (size < 1) {
    cout << "The number which you enter was too small for the system" << endl;
    return 0;
  }
  if (size > 9) {
    cout << "The number which you enter was too big for the system" << endl;
    return 0;
  }
  cout << "      ";
  for (int i = 1; i <= size; i++) {
    cout << "  " << i;
  }
  cout << endl;
  cout << "------";
  for (int i = 1; i <= size; i++) {
    cout << "---";
  }
  cout << endl;
  for (int i = 1; i <= size; i++) {
    cout << "  " << i << " | ";
    for (int j = 1; j <= size; j++) {
      if (i * j < 10) {
        cout << "  ";
      }
      else {
        cout << " ";
      }
      cout << i * j;
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  table(1);
  table(5);
  table(9);
  table(-5);
  table(36);
}