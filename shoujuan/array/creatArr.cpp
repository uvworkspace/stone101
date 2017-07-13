#include <iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
int main()
{
    int n[10];
    for (int i = 0; i<10; i++)
        n[i]=i+1;
    cout<<"element"<<setw(12)<<"value"<<endl;
    for (int j=0; j<10; j++)
        cout<<setw(7)<<j+1<<setw(12)<<n[j]<<endl;
    return 0;
}