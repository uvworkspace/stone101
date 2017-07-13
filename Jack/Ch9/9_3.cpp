#include <iostream>
using namespace std;
void counting_until_n(int n){
  for(int i=1;i<=n;i++)
    cout << i << " ";
  cout<<'\n';
}
int main(){
  int n;
  cout << "Enter an integer to count:\n";
  cin >> n;
  counting_until_n(n);
}