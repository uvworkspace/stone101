#include <iostream>
using namespace std;
void price(int n) {
  if (n == 77) {
    cout << "Goody Bag!" << endl;
  }
  else if (n % 7 == 0) {
    cout << "Apple juice!" << endl;
  }
  else 
    cout << "Gummy bear!" << endl;
}

int main() {
  int num;
  cin >> num;
  price(num);
  cin >> num;
  price(num);
  cin >> num;
  price(num);
}