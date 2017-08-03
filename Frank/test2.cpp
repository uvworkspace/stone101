#include <iostream>
using namespace std;

void ticket(int age)
{
  if (age < 12)
  {
    cout << "FREE!" << endl;
  }
  else if (age > 11 && age < 18)
  {
    cout << "$50" << endl;
  }
  else if (age > 17 && age < 65)
  {
    cout << "$100" << endl;
  }
  else
  {
    cout << "$65" << endl;
  }
}

int main() {
  int age;
  while(cin >> age){
    ticket(age);
  }
  return 0;
}
