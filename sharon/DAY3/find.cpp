#include <iostream>
using namespace std;

int main(){
  string a;
  getline(cin,a);
  int x=a.find("stone");
  if(x!= string::npos){
    cout << x << endl;
  }
  else{
    cout << "non" << endl;
  }
  
}