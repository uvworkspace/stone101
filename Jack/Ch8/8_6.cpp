#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n1, n2;
  cout << "Please enter two integer:\n";
  cin >> n1 >> n2;
  cout << "max = " << max(n1, n2)
  << ", min = " << min(n1, n2);
}