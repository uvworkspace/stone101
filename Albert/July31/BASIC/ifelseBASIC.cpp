#include <iostream>
using namespace std;

void ticket(int age)
{
  if (age < 15)
  {
    cout << "children" << endl;
  }
  else if (age < 65)
  {
    cout << "adults" << endl;
  }
  else
  {
    cout << "seniors" << endl;
  }
}
int main()
{
  ticket(13);
  ticket(72);
  ticket(40);
}