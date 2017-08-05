#include <iostream>
using namespace std;

void sep(int arr[], int len) {
  int A = 0, B = 0, C = 0, D = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] <= 100 && arr[i] >= 80) {
      A += 1;
    }
    else if (arr[i] <= 79 && arr[i] >= 70) {
      B += 1;
    }
    else if (arr[i] <= 69 && arr[i] >= 60) {
      C += 1;
    }
    else  {
      D += 1;
    }
  }
  cout << "A: " << A << " B: " << B;
  cout << " C: " << C << " D: " << D << endl;
}

int main() {
  int arr[] = {80, 88, 95, 99, 75, 65, 60, 77, 92, 83, 50};
  int len = sizeof(arr) / sizeof(arr[0]);
  sep(arr, len);
  return 0;
}