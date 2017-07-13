#include <stdio.h>

void evenOddSort(int array[], int len) {
	int i, j=0, k=0, newArray[8];
	for(i = 0; i <= 7; i++){
		if(array[i] % 2 == 1){
			k++;
		}
		else{
			j++;
			k++;
		}
	}
	for(i = 0; i <= 7; i++){
		if(array[i] % 2 == 1){
			newArray[k] = array[i];
		}
		else{
			newArray[j] = array[i];
		}
	}
	for(i = 0; i<=7; i++){
		printf("%d", newArray[i]);
	}
}

void evenOddSort2(int array[], int len) {
  int evens = 0;
  for (int i=0; i<len; i++) {
    if (array[i] % 2 == 0) {
      int num = array[i];
      for (int j=i; j>evens; j--) {
        array[j] = array[j-1];
      }
      array[evens] = num;
      evens++;
    }
  }
}

int main() {
  int len = 10;
  int arr[] = {1, 6, 2, 10, 3, 7, 4, 9, 5, 8};
  for (int i=0; i<10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  evenOddSort2(arr, len);
  
  for (int i=0; i<10; i++) {
    printf("%d ", arr[i]);
  }
}