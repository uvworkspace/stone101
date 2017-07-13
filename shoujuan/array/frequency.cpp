#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::rand;
using std::srand;
#include<ctime>
using std::time;
int main()
{
    const int arrsize=7;
    int frequency[arrsize]={};
    srand(time(0));
    for (int roll =1; roll<=600; roll++)
        frequency[rand()%6+1]++;
    cout<<"Face"<<setw(13)<<"Frequency"<<endl;
    for (int face=1; face<=6; face++)
        cout<<setw(4)<<face<<setw(13)<<frequency[face]<<endl;
    return 0;
}