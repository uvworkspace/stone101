#include <stdio.h>

int nbrr[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int nbrc[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int nr = 0;
int nc = 0;

int live(int r, int c, int size, int cs[size][size]) {
  if (r>=0 && r<nr && c>=0 && c<nc) {
    return cs[r][c];
  }
  return 0;
}

int nbrs(int r, int c, int size, int cs[size][size]) {
  int n = 0;
  for (int i=0; i<8; i++) {
    n += live(r + nbrr[i], c + nbrc[i], size, cs);
  }
  return n;
}

void life(int size, int cs[size][size], char array[size][size]) {
  int ddr[100] ={0};
  int ddc[100] ={0};
  int lvr[100] = {0};
  int lvc[100] = {0};
  int ddlen = 0;
  int lvlen = 0;
  for (int r=0; r<nr; r++) {
    for (int c=0; c<nc; c++) {
      int n = nbrs(r, c, size, cs);
      if (cs[r][c]) {
        if (n < 2 || n > 3) {
          //printf("case 1 ");
          ddr[ddlen] = r;
          ddc[ddlen] = c;
          ddlen++;
        }
      }
      else if (n == 3) {
        //printf("case 2 ");
        lvr[lvlen] = r;
        lvc[lvlen] = c;
        lvlen++;
      }
      //printf("r=%d c=%d\n", r, c);
    }
  }
  
  for (int i=0; i<ddlen; i++) {
    cs[ddr[i]][ddc[i]] = 0;
    array[ddr[i]][ddc[i]] = '-';
  }
  for (int i=0; i<lvlen; i++) {
    cs[lvr[i]][lvc[i]] = 1;
    array[lvr[i]][lvc[i]] = '*';
  }
}
    
int main() {
	int size = 10;
	char array[size][size];
  int cs[size][size]; 
	nr = nc = size;
	
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++) {
			cs[i][j] = 0;
		}
	}

	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
		  if (i==j || i==size-j-1) {
		  	cs[i][j] = 1;
		    array[i][j] = '*';
		  } else {
		  	cs[i][j] = 0;
		    array[i][j] = '-';  
		  }
		}
	}
	
	for (int g=0; g<20; g++) {
  	for(int i=0; i<size; i++){
  		for(int j=0; j<size; j++){
  			printf("%c ", array[i][j]);
  		}
  		printf("\n");
  	}	  
  	printf("\n");
  	life(size, cs, array);
	}
	
	return 0;
}