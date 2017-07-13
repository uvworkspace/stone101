#include <iostream>
using std::cout;
using std::endl;
int main()
{
    const int arrsize=10;
    int a [arrsize]={1,2,3,4,5,6,7,8,9,10};
    int total = 0;
    for (int i = 0; i < arrsize; i++)
        total += a[i];
    cout<<"Total of array average: "<< total/arrsize << endl;
    return 0;
}