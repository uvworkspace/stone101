#include <iostream>
using namespace std;
bool check(int a, int b, int c){
  if ((b>a && c>b)||(b<a &&c<b)){
    return true
  }
  else{
    return false
  }
}
int main() {
  int cnt;
  cin >> cnt;
  for (int i=0; i<cnt; i++) {
    int x, a, b;
    cin >> x >> a >> b;
    cout << check(x, a, b) << endl;
  }
}