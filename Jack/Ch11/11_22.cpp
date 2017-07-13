#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int str_to_int(char *argv){
  int result=0;
  for(int i=0;argv[i]!=0;i++){
    result = result*10+argv[i]-48;
  }
  return result;
}

int main(int argc, char *argv[]){
  int sum=0;
  if(argc != 3)
    cout << "please enter three integers\n";
  else{
    for(int i = 1; i < argc; i++)
      sum += str_to_int(argv[i]);
  }
  cout << "the sum of the values is " << sum;
}