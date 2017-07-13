#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int x;
    cin>>x;
    for (int i=0; i<=x; i++)
        {
        for (int j=x-i; j>=1; j--)
            {
                cout<<"*";
            }

         cout<<endl;    
        }

    return 0;
}