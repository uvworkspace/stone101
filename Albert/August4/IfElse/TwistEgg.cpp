#include <iostream>
using namespace std;

int total = 0;

void feed10()
{
  total = total + 10;
  if (total < 60)
  {
    cout << "Total: " << total << "$" << endl;
  }
  else
  {
    cout << "Total: " << total << "$, " << "you can pick one..." << endl;
  }
}

void feed50()
{
  total = total + 50;
  if (total < 60)
  {
    cout << "Total: " << total << "$" << endl;
  }
  else
  {
    cout << "Total: " << total << "$, " << "you can pick one..." << endl;
  }
}

void twist()
{
  if (total >= 60)
  {
    if (total - 60 == 0)
    {
      cout << "Here you are, and change 0, bye bye" << endl;
      total = total - 60;
    }
    else if (total - 60 < 60)
    {
      int last1 = total - 60;
      cout << "Here you are, and change " << last1 << ", bye bye" << endl;
      total = total - 60;
    }
    else
    {
      int last2 = total - 60;
      cout << "Here you are, and change " << last2 << ", and you can pick another one" << endl;
      total = total - 60;
    }
  }
  else
  {
    cout << "Not enough money" << endl;
  }
}

void test()
{
  feed50();
  twist();
  feed10();
  feed50();
  feed50();
  twist();
  twist();
}

int main() {
  test();
  return 0;
}