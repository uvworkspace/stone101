#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a; int b; int c; int sum; int average; int product; int smallest; int largest;
    cout << "input 3 different numbers: ";
    cin >> a >> b >> c ;
    sum = a+b+c;
    cout << "the sum is "<< sum << endl;
    average = (a+b+c)/3;
    cout << "the average is "<< average << endl;
    cout << "the largest is "<< endl;
    if (a > b){
         if (b>c) {
          cout << a << endl;
          cout << " the smallest is "<< c << endl;
        } else if(a>c) {
               cout << a << endl;
               cout << " the smallest is "<< b << endl;
        } else {
            cout << c << endl;
            cout << " the smallest is "<< b << endl;
        }
    }
    else if (a>c) {
        cout << b << endl;
        cout << " the smallest is "<< c << endl;
    }
    else {
        if (b>c) {
            cout << b << endl;
            cout << " the smallest is "<< a << endl;
        } else {
            cout << c << endl;
            cout << "the smallest is " << a << endl;
        }
    }
     return 0;
}