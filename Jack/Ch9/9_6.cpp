#include <iostream>
using namespace std;
void plusplus_to(int x){
  x++;
}
int main(){
  int x = 101;
  cout << "Before operation, x = " << x << '\n'
  << "Now, we add one to x.\n";
  plusplus_to(x);//add 1 to x
  cout << "After operation, x = " << x;//do you know why??
}