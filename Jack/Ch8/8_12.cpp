#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(static_cast<unsigned>(time(NULL)));
  for (int i = 0; i < 3; i++){
  //Show the result of tossing a die.
    cout << "+-------+\n";
    switch (rand()%6+1){  
      case 1:
      cout << "|       |\n";
      cout << "|   *   |\n";
      cout << "|       |\n";
      break;
    case 2:
      cout << "|   *   |\n";
      cout << "|       |\n";
      cout << "|   *   |\n";
      break;
    case 3:
      cout << "|   *   |\n";
      cout << "|   *   |\n"; 
      cout << "|   *   |\n";
      break;
    case 4:
      cout << "|  * *  |\n";
      cout << "|       |\n";
      cout << "|  * *  |\n";
      break;
    case 5:
      cout << "|  * *  |\n";
      cout << "|   *   |\n";
      cout << "|  * *  |\n";
      break;
    case 6:
      cout << "| * * * |\n";
      cout << "|       |\n";
      cout << "| * * * |\n";
      break;
    default:
      cout << " *** Error: illegal point of a die ***\n";
      break;
    }
    cout << "+-------+\n";
  }
}