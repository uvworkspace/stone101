// bad_example_of_temperature_converting.cpp
#include <iostream>
using namespace std;
int main(){
    double F=0, C=0;
    // converting
    C = 5. / 9 * ( F - 32 );
    // Prompt user to enter temperature to convert
    cout << "Enter the temperature in degrees F: ";
    // Read in
    cin >> F;
    // Show result
    cout << "degrees C = " << C << '\n';
}