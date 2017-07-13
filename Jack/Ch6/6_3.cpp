#include <iostream>
using namespace std;
int main() {
  char choice; 
  int count = 0; 
  bool finished = false;
  while (!finished) {
    cout << count << '\n';
    cout << "Please enter \"Y\" to continue, \"N\" to exit: ";
    cin >> choice;
    if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
      cout << "\"" << choice << "\"" << " is not a valid choice\n";
    else if (choice == 'Y' || choice == 'y')
      count++; 
    else if (choice == 'N' || choice == 'n')
      finished = true; 
  }
}
