#include <iostream>
using namespace std;

int totalLaps(int m, int n) {
  int laps = 0;
  for(int i = 1; i <= n; i++) {
      laps += i ;
      if (n >= m && n != i) {
        laps += i / m;
      }
    }
  return laps;
}

int main() {
  int groups = 0;
  cin >> groups;
  for (int i=1; i<=groups; i++) {
    int M, N;
    cin >> M >> N;
    cout << totalLaps(M, N) << endl;  
  }
}