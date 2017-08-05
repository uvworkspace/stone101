#include <iostream>  
#include <string>  
#include <math.h> 
#include <algorithm>
using namespace std;

int solution[8];
bool used[8]={false};

void backtrack(int n,int j) {
    if (n == j) {
        for (int i=0; i<j; i++)
            cout << solution[i]+1;
        cout << endl;
        return;
    }
    for (int i=0; i<j; i++) {
        if (!used[i]) {
            used[i] = true;
            solution[n] = i;
            backtrack(n+1,j);
            used[i] = false;
        }
    }
}
int main () {
  int n;
  cin >> n;
  backtrack(0,n);
}