/*內容：
    你拿到一個整數，卻忍不住想把每個位數都乘在一起。例如看到 356 就會想要知道 3 * 5 * 6 的值為何。快寫個程式幫幫為了乘數字而快發瘋的自己吧！
輸入說明： 
    一開始有一個數字 T，表示共有幾組測試資料。
    接下來有 T 個數字 n (0 <= n < 2147483648)。
輸出說明： 
    輸出可以拯救自己的結果。
範例輸入：
    3
    356
    123
    9999
範例輸出:
    90
    6
    6561
提示： 
標籤:
    字元處理 算術運算子
出處: 
    (管理：VacationClub)*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	int k;
	string s;
	cin>>k;
	while(k--){
		int sum=1;
		cin>>s;
		for(int i=0;i<s.length();i++){
			sum=sum*(s[i]-'0');
		}
		cout<<sum<<endl;
	}
}