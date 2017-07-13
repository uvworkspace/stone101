#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main0()
{
    int x = 1;
    int y;
    
    while (x<=10)
    {
        y=1;
        while (y<=x)
        {
            cout<< "*";
            y++;
        }
        x++;
        cout<<endl;
    }
    return 0;
}
int main()
{
    for (int x=1; x<=5; x += 1)
    {
        for (int y=1; y<=x; y++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}