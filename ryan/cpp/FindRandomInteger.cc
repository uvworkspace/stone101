#include <iostream>
#include <cmath> 
using namespace std;

void randomArray (int arr[], int size, int limit) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    int num = rand() % (limit+1);
    arr[i] = num;
  }
}

int findNumber (int arr[], int size, int x) {
  for (int i = 0; i < size; i++) {
    if(arr[i] == x) {
      return i;
    }
  }
  return -1;
}

int findNearest(int arr[], int size, int x) {
  int min = 999;
  int closest = -1;
  
  for (int i = 0; i < size; i++) {
    if(arr[i] == x) {
      return i;
    }
    else {
      int diff = abs(x - arr[i]);
      if (min > diff) {
        closest = i;
        min = diff;
      }
    }
  }
  return closest;
}

int findNearest2(int arr[], int size, int x) {
  int closest = 0;
  
  for (int i = 0; i < size; i++) {
    if(arr[i] == x) {
      return i;
    } else {
      int diffN = abs(arr[closest] - x);
      int diff = abs(arr[i] - x);
      if (diffN > diff) closest = i;
    }
  }
  
  return closest;
}

int main() {
  int size = 10;
  int arr[size];
  randomArray(arr, size, 10);
  
  for (int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  int num = 3;
  cout << "find: " << num << endl;
  
  cout << "index: " << findNumber(arr, size, num) << endl;
  cout << "index: " << findNearest(arr, size, num) << endl;
  
  num = 100;
  cout << "find " << 100 <<  " index: " << findNearest(arr, size, 100) << endl;
  cout << "find " << 100 <<  " index: " << findNearest2(arr, size, 100) << endl;
}