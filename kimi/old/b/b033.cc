#include <iostream>  
#include <string>  
#include <math.h> 
#include <algorithm>
using namespace std;
int main () {
  string m,n;
  cin >> m >> n;
  int a[m.length()+1][n.length()+1];
  a[0][0]=0;
  for (int l=1;l<m.length()+1;++l) {
    a[l][0]=0;
  } for (int o=1;o<n.length()+1;++o) {
    a[0][o]=0;
  }
  for (int i=0;i<m.length();++i) {
    for (int j=0;j<n.length();++j) {
      if (m[i]==n[j]) {
        a[i+1][j+1]=a[i][j]+1;
      } else {
        if (a[i+1][j]>a[i][j+1]) {
          a[i+1][j+1]=a[i+1][j];
        } else {
          a[i+1][j+1]=a[i][j+1];
        }
      }
    }
  }
  cout << a[m.length()][n.length()] << endl;
}