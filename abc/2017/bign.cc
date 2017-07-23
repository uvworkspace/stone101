#include<iostream>
#include<vector>
using namespace std;
void times1(vector<int>&dig,int n){
  int carry=0;
  for(int q=0;q<dig.size();q++){
    int pro=n*dig[q]+carry;
    dig[q]=(pro)%10;
    carry=pro/10;
  }
  if(carry>0){
    while (carry>0){
      dig.push_back(carry%10);
      carry=carry/10;
    }
  }
}
vector<int> fac1(int n){
  vector<int> digits = {1};
  for (int i=2; i<=n; i++) {
    times1(digits, i);
  }
  return digits;
}

void times2(int dig[],int len,int n){
  int carry=0;
  for(int q=0;q<len;q++){
    int pro=n*dig[q]+carry;
    dig[q]=(pro)%10;
    carry=pro/10;
  }
  if(carry>0){
    while (carry>0){
      dig[len]=carry%10;
      carry=carry/10;
      len++;
    }
  }
  return len;
}

int fac2(int n){
  int digits[] = {1};
  int 
  for (int i=2; i<=n; i++) {
    times1(digits, i);
  }
  return digits;
}

int main(){
  int n;
  while (cin >> n) {
    vector<int> v = fac1(n);
    for(int e=1;e<=v.size();e++){
      cout<<v[v.size()-e];
    }
    cout <<endl;
  }
}

