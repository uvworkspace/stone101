#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int yy , j1 , j2 , j3;
    while(cin >> yy){
        j1 = yy % 4;
        j2 = yy % 100;
        j3 = yy % 400;
        if (j1 == 0)
            if (j2 == 0 && j3 != 0)
            cout << "平年" << endl;
            else
            cout << "閏年" << endl;
        else
        cout << "平年" << endl;
    }
    return 0;
} 