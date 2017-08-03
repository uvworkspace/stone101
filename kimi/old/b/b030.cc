#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;
int min[100],score[100];
int aa[100][1000];
int m(int i,int a) {
  if (a<0) {
    return 0;
  } else if (i<0) {
    return 0;
  } else if (aa[i][a]>0){;
    return aa[i][a];
  } else {
    aa[i][a]=max(m(i-1,a),m(i-1,a-min[i])+score[i]);
    return aa[i][a]
  }
}

int main () {
  int n,m;
  cin >> n >> m;
  for (int i=0;i<n;++i) {
    cin >> min[i] >> score[i];
  }
  cout << m(n-1,m) << endl;
}