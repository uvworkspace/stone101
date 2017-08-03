#include <iostream>
#include <string>
using namespace std;
int main() {
  string a;
  cin >> a;
  if (a.length() > 10){
    cout << a.substr(5,5) << endl;
  }
}