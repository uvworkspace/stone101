#include <iostream>
using namespace std;
int main(){
  for (char one = 'A'; one <= 'D'; one ++)
    for (char two = 'A'; two <= 'D'; two++)
      if(two != one)
        for(char three = 'A'; three <= 'D'; three++)
          if(three != one && three != two)
            for(char fourth = 'A'; fourth <= 'D'; fourth++)
              if(fourth != one && fourth != two && fourth != three)
                cout << one << two << three << fourth << '\n';
}
