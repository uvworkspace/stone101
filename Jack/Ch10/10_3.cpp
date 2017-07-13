#include <iostream>
#include <iomanip>
using namespace std;

int count(){
  static int x = 0;
  return ++x; 
}

int main(){
  for (int i = 0; i < 7; i++)
    cout << count() << "\n";
}