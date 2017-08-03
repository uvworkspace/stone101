#include <iostream>
using namespace std;

int main()
{
  char ch1 = 'A'; 
  char ch2 = 'a';
  
  for (int i = 0; i < 5; i++)
  {
    cout << ch1 << " ";
    ch1++;
  }
  
  cout << " " << endl;
  
  for (int j = 0; j < 5; j++)
  {
    cout << ch2 << " ";
    ch2++;
  }
}