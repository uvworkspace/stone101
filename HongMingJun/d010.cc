/*內容 ：
對一個正整數 N 而言，將它除了本身以外所有的因數加起來的總和為 S，
如果 S>N，則 N 為盈數，如果 S<N，則 N 為虧數，而如果 S=N，
則 N 為完全數(Perfect Number)。例如 10 的因數有 1、2、5、10，
1+2+5=8<10，因此10 為虧數，而 12 的因數有 1、2、3、4、6、12，
1+2+3+4+6=16>12，因此 12 為盈數。至於 6 的因數有 1、2、3、6，
1+2+3=6，所以 6 是完全數(它也是第一個完全數)。
現在請你寫一個程式，輸入一個正整數 N，
然後印出它是盈數、虧數還是完全數。
輸入說明： 
輸出說明： 
範例輸入：
    30
    26
    28
範例輸出:
    盈數
    虧數
    完全數
提示： 
標籤:
    數學
出處: 
    Sagit's C++ 程式設計 (管理：sagit)*/
#include<vector>
#include<iostream>
using namespace std;

int main(){
	int n;
	vector<int> v;
	while(cin>>n){
		int sum=0;
		v.clear();
		for(int i=1;i<=n;i++){
			if(n%i==0){
				v.push_back(i);
			}
		}
/*		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" "; 
		}*/
		for(int i=0;i<v.size()-1;i++){
			sum=sum+v[i];
		}
//		cout<<sum<<endl;
		if(sum<n) cout<<"虧數"<<endl;
		else if(sum>n) cout<<"盈數"<<endl;
		else if(sum==n) cout<<"完全數"<<endl;
	}
}