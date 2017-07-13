#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;

int main()
{
    const int resize= 23;
    const int fresize=11;
    
    const int responses[resize]={1,2,6,4,8,5,9,7,8,10,1,6,3,8,2,6,7,5,8,2,6,7,5};
    int frequency[fresize]={};
    for (int answer=0; answer<=resize; answer++ )
        frequency[responses[answer]]++;
    cout<<"Rating"<<setw(17)<<"Frequency"<<endl;
    for (int rating=1; rating<fresize;rating++)
        cout<<setw(6)<<rating<<setw(17)<<frequency[rating]<<endl;
    return 0;
}