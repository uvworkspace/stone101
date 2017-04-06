/*
內容：
    古埃及的石壁上，刻畫著三行文字，它是進入法老王寶藏庫的提示。
    經過了一千多年，終於有人解讀出它的含義，將所有非數字的字元去除，只留下數字的部分，
    於是三行文字可以得到三個數字，最後再把這三個數字相加，就可以得到最終的密碼。你，能夠找出這密碼是什麼嗎？
輸入說明：
    輸入資料有三行，每行有100個以內的字元(不包含空格)，每行至少有一個字元是數字而且每行的數字不會超過8個。
輸出說明：
    請將每行非數字的字元去除之後，可以得到一個數字，再將這三個數字加起來，並輸出其結果。
範例輸入：
    ab1c2d3.
    \\6|9//
    &$%x777<>
範例輸出 ：
    969
*/
#include<iostream>  
#include<string>  
using namespace std;  
  
int main(){  
    string s;  
    int sum=0;    
    for(int i=0;i<3;i++){  
        cin>>s;  
        int tmp=0;  
        for(int j=0;j<s.length();j++){  
            if(s[j]>='0'&&s[j]<='9'){   
                tmp=tmp*10+s[j]-'0';  
            }     
        }  
        sum+=tmp;  
    }  
    cout<<sum<<endl;  
}  