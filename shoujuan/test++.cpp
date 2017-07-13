#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{int a=1; int b=1; int c=1; int product = 9; int x= 5;
    product *= x++;
    cout<< product<<endl;
    
    b=a++;
    cout<<b<<" ";
    c=++a;
    cout<<c<<" ";
    a++;
    cout<<a<<" "<<endl;
    return 0;
}