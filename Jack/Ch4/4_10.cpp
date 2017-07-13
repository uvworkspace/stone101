// temprature_convert.cpp
#include <iostream>
using namespace std;
int main(){
    double F, C;
    // Prompt user to enter temperature to convert
    cout << "Enter the temperature in degrees C: ";
    // Read in
    cin >> C;
    // converting
    F = C*9/5 + 32;
    // Show result
    cout << "degrees F = " << F << '\n';
}