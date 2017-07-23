#include <iostream>    
#include <string>    
#include <math.h>    
using namespace std;  
int bigger(int math[],int all[],int n,int len) {  
  int s=all[n];  
  int s_m=math[n];  
  int s_p=n;  
  for (int i=n+1;i<len;++i) {  
    if (all[i]>s) {  
      s=all[i];  
      s_p=i;  
      s_m=math[i];  
    }  
    if (all[i]==s and math[i]>s_m) {  
      s=all[i];  
      s_p=i;  
      s_m=math[i];  
    }  
  }  
  return s_p;  
}  
  
void exchange(int a[],int c_1,int c_2) {  
  if (c_1!=c_2) {
    int aaa=a[c_1];  
    a[c_1]=a[c_2];  
    a[c_2]=aaa;
  }
}  
int main () {  
  int N,all[100],math[100],nums[100];  
  cin >> N;  
  for (int i=0;i<N;++i) {  
    int a,b,c,d,e,f; 
    cin >> a >> b >> c >> d >> e >> f; 
    all[i]=b+c+d+e+f;  
    math[i]=d;
    nums[i]=a;
  }  
  for (int l=0;l<N;++l) {  
    int aaaa=bigger(math,all,l,N);
    exchange(nums,aaaa,l);  
    exchange(all,aaaa,l);  
    exchange(math,aaaa,l);  
  }  
  for (int k=0;k<N;++k) {  
    cout << nums[k] << endl;  
  }  
}  