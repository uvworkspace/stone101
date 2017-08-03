#include <iostream>
using namespace std;

void check(int num)
{
  int x = num;
  int one =  x % 10;
  x = (x - one) / 10;
  int ten = x % 10;
  x = (x - ten) / 10;
  int hundred = x % 10;
  x = (x - hundred) / 10;
  int thousand = x;
  if ((thousand + hundred + ten) % 7 == one)
  {
    cout << "Yes!!!!!" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}

int main() {
  int num;
  while (cin >> num)
  {
    check(num);
  }
}