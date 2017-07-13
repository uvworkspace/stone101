// time_convert.cpp
#include <iostream>
using namespace std;
int main(){
    int hours, minutes, seconds;
    // Prompt user to enter the total time to convert
    cout << "Enter the total time in seconds\n";
    // Read in
    cin >> seconds;
    // converting
    hours = seconds / 3600;
    seconds = seconds - hours * 3600;
    minutes = seconds / 60;
    seconds = seconds - minutes * 60;
    // Show result
    cout << hours << " hr(s) " << minutes << " min(s) "<< seconds << " sec(s)\n";
}