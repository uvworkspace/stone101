#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int x;
    char ch;
    cin>>x;
    cin>>ch;
    for (int i=0; i<=x; i++){
        for (int j=x-i; j>=1; j--){
            cout<<" ";
        }
        for (int k=0; k<=i; k++){
            cout<<ch;
        }
        cout<<endl;
    } 

    return 0;
}