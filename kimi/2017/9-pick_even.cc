#include <iostream>  
#include <string>  
#include <math.h> 
#include <vector>
#include <string>
using namespace std;

int collectEven1(vector<int>& arr, vector<int>& out) {
  int len=0;
  for (int i=0;i<arr.size();++i) {
    if (arr[i]%2==0) {
      out.push_back(arr[i]);
      len++;
    }
  }
  return len;
}

int collectEven2(int arr[],int out[],int len_a,int len_o,int len_max) {
  int len_e=0;
  for (int i=0;i<len_a;++i) {
    if (arr[i]%2==0) {
      if (len_max!=len_o) {
        out[len_o]=arr[i];
        len_o++;
        len_e++;
      } else {
        return len_e;
      }
    }
  }
  return len_e;
}

void prv(vector<int>& arr) {
  for (int i=0;i<arr.size();++i) {
    if (i!=0) {
      cout << ",";
    }
    cout << arr[i];
  }
  cout << endl;
}

void pra(int arr[],int len) {
  for (int i=0;i<len;++i) {
    if (i!=0) {
      cout << ",";
    }
    cout << arr[i];
  }
  cout << endl;
}

int main () {
  vector <int> in1,out1;
  int in2[1000];
  int len=0,n;
  while (cin >> n) {
    in1.push_back(n);
    in2[len]=n;
    len++;
  }
  int out2[1000];
  cout << "vec:" << collectEven1(in1,out1) << ":";
  prv(out1);
  int aaa=collectEven2(in2,out2,len,0,1000);
  cout << "arr:" << aaa << ":";
  pra(out2,aaa);
}