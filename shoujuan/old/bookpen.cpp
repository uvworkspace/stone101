#include<iostream>
using std::cout;
using std::endl;
using std::cin;
int main ()
{
    char string1[20];
    char string2[]="string literal";
    
    cin>> string1;
        cout<<"string1 is: "<<string1;
        cin>>string1;
        cout<<string1<<endl;
        cin>>string1;
        cout<<"\nstring1 is: "<<string1<<endl;
        
    return 0;
}