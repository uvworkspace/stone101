#include <iostream>
using namespace std;

void randomArray (int arr[], int size, int limit) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    int num = rand() % (limit+1);
    arr[i] = num;
  }
}

int main() {
    int size = 10;
    int arr[size];
    int limit = 99;
    randomArray(arr, size, limit);
    for(int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    return 0;
}