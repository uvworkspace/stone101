#include <iostream>
#include <sstream>
using namespace std;

int main(){
  int nlines=0;
  string line,word;
  while(getline(cin,line)){
    nlines++;
    istringstream iss(line);
    while (iss >> word) {
       cout << nlines << ": " << word << endl;
       nlines++;
       
    }
  }
}