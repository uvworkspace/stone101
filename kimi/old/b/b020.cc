#include <iostream>  
#include <string>  
#include <math.h>
using namespace std;

string small_string(string a,string b) {
  if (a.length()>b.length()) {
    return a;
  } else {
    return b;
  }
}

bool find_small(string a,string b) {
  for (int i=0;i<small_string(a,b).length();++i) {
    if (a[i]-b[i]>0) {
      return false;
    } else if (a[i]-b[i]<0) {
      return true;
    }
  }
  if (small_string(a,b)==a) {
    return false;
  } else {
    return true;
  }
}

int smaller(string a[],int n,int len) {
  string s=a[n];
  int s_p=n;
  for (int i=n+1;i<len;++i) {
    if (!find_small(s,a[i])) {
      s=a[i];
      s_p=i;
    }
  }
  return s_p;
}

void exchange(string a[],int c_1,int c_2) {
  string aaa=a[c_1];
  a[c_1]=a[c_2];
  a[c_2]=aaa;
}

int main () {
  int N;
  string a[100];
  cin >> N;
  for (int i=0;i<N;++i) {
    cin >> a[i];
  }
  for (int j=0;j<N;++j) {
    exchange(a,smaller(a,j,N),j);
  }
  for (int k=0;k<N;++k) {
    cout << a[k] << endl;
  }
}