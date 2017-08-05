#include <iostream>
using namespace std;

int money=0;

void feed50(){
  money=money+50 ;
  cout << money << endl;
}
void feed10(){
  money=money+10;
  cout << money << endl;;
}
void twist(){
  cout << "total: " ;
  int x=money-60;
  cout << x << endl;
}
int main() {
  feed50();
  feed10();
  feed50();
  twist();
  return 0;
}