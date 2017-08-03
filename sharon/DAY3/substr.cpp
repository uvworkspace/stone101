#include <iostream>
using namespace std;

int main(){
  string a="hahahahahahhahahahaaaaaahhhhha";
  if(a.length()>10){
    cout << a.substr(5,a.length()-1) << endl;
  }
  
}