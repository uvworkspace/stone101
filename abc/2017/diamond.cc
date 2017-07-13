#include <iostream>
using namespace std;

void line(int a){
  for(int r=0; r<a; r++){
    cout << " ";
  }
}
int max (int x, int y){
  return x >= y ? x:y ;
}
void diamond(int n){
  for (int i=1; i<2*n; ++i) {
    line(max(n-i, i-n));
    cout << "*";
    line(max((n-max(n-i, i-n)) -1 ,0)*2-1);
    if (i!=1 and i!=2*n-1){
      cout << "*";
    }
    line(max(n-i, i-n));
    cout << endl;
  }
}
int main(){
  int n;
  while (cin >> n) {
    diamond(n);
  }
  return 0;
}