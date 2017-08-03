#include <iostream>
using namespace std;

void price(int num)
{
  if (num == 77)
  {
    cout << "goody bag" << endl;
  }
  else if (num % 7 == 0)
  {
    cout << "apple juice" << endl;
  }
  else
  {
    cout << "gummy bear" << endl;
  }
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