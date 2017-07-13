// enhancedtime_convert.cpp
#include <iostream>
using namespace std;
int main(){
    int hours, minutes, seconds, m_tens, m_ones, s_tens, s_ones;
    // Prompt user to enter the total time to convert
    cout << "Enter the total time in seconds\n";
    // Read in
    cin >> seconds;
    // converting
    hours = seconds / 3600;
    seconds = seconds - hours * 3600;
    minutes = seconds / 60;
    seconds = seconds - minutes * 60;
    // get the bit of min(s) and sec(s)
    m_tens = minutes / 10;
    m_ones = minutes % 10;
    s_tens = seconds / 10;
    s_ones = seconds % 10;
    // Show result
    cout << hours << " : " << m_tens << m_ones << " : " << s_tens << s_ones <<"\n";
}
