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
        for (int j=1; j<=i; j++)
            {
                cout<<" ";
            }
        for (int k=x-i; k>=1; k--)
            {
                cout<<"*";
            }
         cout<<endl;    
        }

    return 0;
}