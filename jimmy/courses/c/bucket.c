#include <stdio.h>

void BucketSort(int birthYears[], int len) {
	int decade[10][10];
	int i, j, a;
	
	//Initialize array
	
	for(i = 0; i <= 9; i++){
		for(j = 0; j <= 9 ; j++){
			decade[i][j]=-1;
		}
	}
	
	//Start 
  /*
	for(a = 0; a <= len-1; a++){
		for(i = 0; i < 10; i++){
			for(j = 0; j < 10; j++){
				if(10*i+j == birthYears[a]){
					decade[i][j] = birthYears[a];
				}
			}
		}	
	}
	*/
	for(a = 0; a <= len-1; a++) {
		int r = birthYears[a] / 10;
		int c = birthYears[a] % 10;
		decade[r][c] = birthYears[a];
	}
	for (int m=0; m<10; m++) {
	  for (int n=0; n<10; n++) {
	    if (decade[m][n] != -1)
	      printf("%d ", decade[m][n]);
	  }
	}
}


int main() {
  int len = 15;
  int bys[] = 
    { 11, 33, 22, 44, 
      66, 55, 77, 88, 
      99, 50, 65, 54,
      98, 87, 43 };
  
  for (int i=0; i<len; i++) {
    printf("%d ", bys[i]);
  }
  printf("\n");
  
  BucketSort(bys, len);
}