#include <stdio.h>

const int SIZE = 10;

void BSearch(int arr[SIZE], int elem, int low, int high) {
  if(elem<arr[low] || elem>arr[high]) {
    printf("Element not present\n\n");
    return;
  }
  
  if(low==high){
    printf("Element at position %d\n\n",low);
    return;
  } else if(elem<=arr[low+(high-low)/2]) {
    BSearch(arr,elem,low,low+(high-low)/2);
  } else {
    BSearch(arr,elem,low+((high-low)/2)+1,high);
  }
}

void TSearch(int arr[SIZE], int elem, int low, int high){
  if(elem<arr[low] || elem>arr[high]){
		printf("Element not present\n\n");
		return;
	}
	
  if(low==high){
		printf("Element at position %d\n\n", low);
	} else if(elem<=arr[low+(high-low)/3]) {
		TSearch(arr,elem,low,low+(high-low)/3);
	} else if(elem<=arr[low+2*((high-low)/3)]) {
		TSearch(arr,elem,low+(high-low)/3+1,low+2*((high-low)/3));
  } else { 
    TSearch(arr,elem,low+2*((high-low)/3)+1,high);
  }
}

int main() {
  int len = 10;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i=0; i<len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  BSearch(arr, 5, 0, len-1);
  TSearch(arr, 5, 0, len-1);
}