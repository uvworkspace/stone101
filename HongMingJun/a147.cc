/*
內容 ：
    大於 0、整數、不可以被 7 整除、小於 n，請輸出所有可能的數字。
    輸入說明 ： 
    輸入為一個整數 n，其中 n 不大於 10000。
    若 n = 0 表示資料結束。
輸出說明 ： 
    輸出如前述，各個數字之間以一個空白隔開。
範例輸入：
    5
    10
    20
    0
範例輸出:
    1 2 3 4
    1 2 3 4 5 6 8 9
    1 2 3 4 5 6 8 9 10 11 12 13 15 16 17 18 19
*/
#include<iostream>
using namespace std;

int main(){
	int k;
	while(cin>>k){
		int count=0;
		for(int i=1;i<k;i++){
			if(i%7!=0&&count==0){
				cout<<i;
				count++;
			}
			else if(i%7!=0){
				cout<<" "<<i;
				count++;	
			}
		}
		cout<<endl;
	}
}