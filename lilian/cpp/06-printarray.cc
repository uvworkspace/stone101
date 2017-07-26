#include <iostream>
#include <sstream>
#include <string>
using namespace std;


/*int main() {
  int n;
  cin >> n;
  int pi[n];
  for (int i=0; i<n; i++) {
    cin >> pi[i];
  }
  for (int i=0; i<n; i++) {
    cout << pi[i];
  }
}*/

int main() {
  int n;
  cin >> n;
  string data[10][n];
  int nlines = 0;
  string line, word;
  while (getline(cin, line)) {
    ++nlines;
    std::istringstream iss(line);
    int nwords = 0;
    while (iss >> word) {
      //cout << nlines << ": " << word << endl;
      ++nwords;
      data[nlines][nwords]=word;
    }
  }
  for (int i=0; i<=10;i++){
    for (int j=0;j<=n;j++){
      if (data[i][j]!=""){
        cout << data[i][j]<< " ";
      }
    }
    cout << endl;
  }
}