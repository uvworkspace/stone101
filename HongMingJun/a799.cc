/*內容：
　　很久很久以前，有一個國家叫做「正值國」這個國家，
　　的人做什麼事都非常正直，做人坦蕩蕩。
　　也因此，國家平安和樂、生活富足。
　　但是，這個國家有一個不成文的習俗，就是他們不喜歡負數，
　　他們把負數視為邪惡的象徵，所以他們非常討厭看到負數。
　　他們只要看到負數，就會直接把負號去掉，例如”-1”會變成”1”。
　　筱華是剛從其他國家搬來正值國的一位中學生，
　　他每次只要在數學考卷上寫到負數，
　　就會被其他同學和老師狠狠的痛打一頓，你可以幫幫他嗎？
輸入說明： 
    輸入只有一行，包含一個整數N。
    對於配分40%的測試資料，保證N>=0。
對於配分100%的測試資料，保證-2147483647<N<2147483647。 
輸出說明： 
    請輸出一個整數，代表正值國喜歡的數字
範例輸入：
    -5
範例輸出:
    5
提示：
標籤:
    基本輸出輸入
出處: 
    (管理：Nineguan)*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	n=abs(n);
	cout<<n<<endl;
}
