#include <iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
int main()
{
    const int arrsize=11;
    int a [arrsize]={0,0,0,0,0,0,1,2,2,1};
    cout<<"grade distribution: "<<endl;
    for (int i = 0; i < arrsize; i++){
        if (i==0)
            cout<<"0-9";
        else if (i==10)
            cout<<"100";
        else
            cout<<i*10<<"-"<<i*10+9<<":";
        for (int stars=0; stars<a[i]; stars++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}