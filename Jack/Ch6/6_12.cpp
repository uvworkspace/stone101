#include <iostream>
using namespace std;
int main(){
  char one,two,three; 
  one='A';
  while(one <= 'C'){
    two = 'A';
    while(two <= 'C'){ 
      if(two != one){ 
        three = 'A';
        while(three <= 'C'){ 
          if (three != one && three != two)
            cout << one << two << three << '\n';
          three++;
        }
      }
      two++;
    }
    one++;
  }
}