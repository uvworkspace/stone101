#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void initialize_the_seed() {
  srand(static_cast<unsigned>(time(NULL)));
}
void show(int points){
  cout << "+-------+\n";
  switch (points){
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
    cout << "Error: invalid value of the die\n";
    break;
    }
  cout << "+-------+\n";
}

int roll(){
  return rand()%6 + 1;
}
int main(){
  initialize_the_seed();
  for (int i = 0; i < 5; i++)
    show(roll());
} 