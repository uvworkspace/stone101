/*內容：
    西元 2505 年 1 月 1 日，發生了世界經濟大恐荒。從那天起，物價飛漲。
    第一天一個饅頭只要一元，第二天就要二元，第三天要賣三元，以此類推。
    給你從第一天起文文每天所買的饅頭數，請問他總共花了多少錢？
輸入說明： 
    輸入第一行有一個整數 n，代表文文從第一天起，連續買了 n 天的饅頭。
    第二行會有 n 個整數，依序為第一天到第 n 天文文所買的饅頭數量。
輸出說明： 
    輸出文文買饅頭所花的金額。
範例輸入：
    5
    1 2 3 4 5
範例輸出:
    55
提示 ： 
    標籤:
出處: 
    板橋高中教學題 (管理：snail)*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	int day,cost=0;
	string n;
	cin>>day;
	for(int i=1;i<=day;i++){
		cin>>n[i];
	}
	for(int i=1;i<=day;i++){
		cost=cost+((n[i]-'0')*i);
	}
	cout<<cost<<endl;
}