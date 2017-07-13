#include <iostream>
using namespace std;
int main(){
  int count = 1; 
  top:
      if(count > 5)
        goto end;
      cout << count << '\n'; 
      count++; 
      goto top;
  end:
      cout << "finished"; 
}