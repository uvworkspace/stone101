#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;
long long int aaa[40][40]={0};
long long int find (int a,int b) {
  if (a==0 or b==0) {
    return 1;
  } else if (aaa[a][b]>0) {
    return aaa[a][b];
  } else {
    aaa[a][b]=find(a-1,b)+find(a,b-1);
    return aaa[a][b];
  }
}
int main () {
  int a,b;
  cin >> a;
  cin >> b;
  long long int aa=find(a,b);
  cout << aa << endl;
}