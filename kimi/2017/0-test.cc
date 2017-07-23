#include <iostream>  
#include <string>  
#include <math.h> 
#include <map>
using namespace std;

int main () {
  char nums[100];
  for (int i=0;i<20;++i) {
    nums[i]=4;
  }
  for (int j=0;j<20;++j) {
    cout << nums[j]+'0' << " ";
  }
}