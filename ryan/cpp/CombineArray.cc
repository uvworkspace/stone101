#include <iostream>
using namespace std;

void combine(int arr1[], int size1, int arr2[], int size2, int arr[], int size) {
  int i = 0;
  while(i < size1) {
    arr[i] = arr1[i];
    i++;
  }
  int j = 0;
  for (int i = size1; i < size; i++) {
    arr[i] = arr2[j];
    j++;
  }
}

void combine2(int arr1[], int size1, int arr2[], int size2, int arr[], int size) {
  int i = 0;
  while(i < size1) {
    arr[i] = arr1[i];
    i++;
  }
  /*
  for (int j = 0; j < size2; j++) {
    arr[j+size1] = arr2[j];
  }
  */
  while (i < size) {
    arr[i] = arr2[i-size1];
    i++;
  }
}

int main() {
  int size1 = 3;
  int arr1[] = {1, 2, 3};
  int size2 = 5;
  int arr2[] = {4, 5, 6, 7, 8};
  int size = size1 + size2;
  int arr[size];
  
  combine2(arr1, size1, arr2, size2, arr, size);
  
  // should print 1 2 3 4 5 6 7 8
  for (int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
}