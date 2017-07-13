#include <iostream>
using namespace std;

void ascending(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    arr[i] = i;
  }
}

int main() {
  int size = 10;
  int arr[size];
  ascending(arr, size);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}