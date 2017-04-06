#include <iostream>
#include <stream>
using namespace std;
int cnt=0;
string log(string s)
{  
    ++cnt;
    return to_string(cnt)+" "+s;
}