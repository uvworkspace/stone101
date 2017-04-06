/*內容 ：
    烏龜又忘記交代給他的工作了。frown
    「我真的記得你沒說過，真的」他辯解道
    「喔是喔」瓜瓜說道
    「真的啦」他繼續辯解道
    雖然解決事情遠遠比辯解來的重要，
    但我們還是請了學弟在N條字串的對話紀錄中尋找是否出現過交代工作的字串X(1<=N<=10^5)， 
    字串總長度<=10^6)想當然爾，學弟花了7分40秒就用二分搜和SET解決我們的問題了，
    沒錯，我們找到了交代工作的字串X (X長度<=1000)
    「這是在交代工作噢?! 我還以為你只是在打招呼!」
    「如果是在交代工作，就應該把問題放前面，
    要做的是放後面，然後這樣擺..這樣挪..這樣我才看得懂啊!」
    為了配合烏龜，我們決定把字串X以每個字元當作句首印出來一次，
    以跨越我們和他之間的代溝(GENERATION GAP)
輸入說明 ： 
輸入只有一行，輸入一字串X，題目保證字串X中只會有大小寫的英文字母
輸出說明 ： 
    輸出有N行
    輸出的第 i 行要從 X 字串的第 i 個字元開始輸出到印完整個 X 字串
範例輸入：
    xndrf
範例輸出:
    xndrf
    ndrfx
    drfxn
    rfxnd
    fxndr
提示： 
標籤:
出處: 
    (管理：fishtoby)*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int i=0;
	cin>>s;
	while(i<s.length()){
		for(int j=i;j<s.length()+i;j++){
			cout<<s[j%s.length()];
		}
		i++;
		cout<<endl;
	}
}