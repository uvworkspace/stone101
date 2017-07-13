#include <iostream>
using namespace std;
int gcd(int a, int b){
    int max=a>=b? a:b;
    int min=a>=b? b:a;
    while (max%min!=0){
        int q=min;
        min=max%min;
        max=q;
    }
    return min;
}
int main(){
    int a,b;
    while(cin >>a){
        cin >> b;
        cout << gcd(a,b) << endl;
    }
}