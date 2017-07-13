#include <iostream>
#include <cstdlib>
#include <ctime>
#include "is_even.cpp"
using namespace std;

int main(){
  srand(time(NULL));
  int x=rand()%256;
  if(is_even(x))
    cout << x << " is an even\n";
  else 
    cout << x << " is not an even\n";
}