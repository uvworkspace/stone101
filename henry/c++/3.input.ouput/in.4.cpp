#include<iostream>
#include<sstream>
using namespace std;

int main() {
 string line, a;
 while(getline(cin,line)) {
   cout << "# " ;
   int b = 1;
   istringstream iss(line);
   while(iss >> a) {
    cout << b <<  ": " <<  a << " " ;
    b++;
   }
  cout << endl;
 }
}