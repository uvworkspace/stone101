#include <iostream>
using namespace std;
void count_back(int n=7){
  while(n > 0)
    cout << n-- << " ";
  cout<<endl;
}
int main(){
  count_back(3);
  cout << "================================" << '\n';
  count_back();
}
