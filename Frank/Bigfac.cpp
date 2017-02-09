#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n ;
    cout << "Please enter a number less than 1000" << endl;
    cin >> n;
        int fac = 1;
        for (int i=1 ; i <= n ; i++){
            fac = fac * i;
        }
    cout << "The " << n <<"'th factorial answer is " << fac << endl;
    
system("pause");
return 0;
}