/*
this code runs abnormally on Cloud9,
maybe you can run it on other platform, like DevC++ ...
*/
#include <iostream>
#include <ctime>
using namespace std;
int main(){
  char x;
  clock_t start,end;
  cout << "Enter a character to continue:\n";
  start = clock(); // starting time
  cin >> x;
  end = clock(); // ending time
  cout <<  static_cast<double>(end - start)/CLOCKS_PER_SEC << " seconds";
}