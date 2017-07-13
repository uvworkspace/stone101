//****************************************************************
//	Things to remember:
//  ASCII Code for "0" is 40
//	ASCII Code for "*" is 42
//	ASCII Code for "-" is 45
//****************************************************************

#include <stdio.h>
//#include "simpio.h"

#define SIZE 25

int checkNeighbors (int x, int y, char array[][SIZE]);
void nextGeneration(char array[][SIZE], int i, int j);

int main() {
	int i, j, size, times;
	
	printf("Size?\n");
	scanf("%d", &size);
	
	printf("Times\n");
	scanf("%d?", &times);
	
	char array[size][size];
	
	for(i = 0; i<size; i++){
		for(j = 0; j<size; j++){
			if (i==j || i==size-j-1){
		    	array[i][j]='*';
		 	} 
			else{
				array[i][j]='-';  
			}
			printf("%c", array[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i<size; i++){
		for(j = 0;j<size; j++){
			nextGeneration(array, i, j);
			printf("%c", array[i][j]);
		}
		printf("\n");
	}
}

//************************************************************
// If 0~1 neighbors then dies from loneliness
// If 2~3 neighbours then survives
// If 3+ neighbours then dies from overcrowding
// If empty space has 3 neighbours then new creature appears!
//************************************************************

int checkNeighbors (int x, int y, char array[][SIZE])
{
	int neighbors = 0;
	
	//X is the coordinates in the array, so is y.
	//Use this in a loop like for the array
	
	//This adds up the amount of neighbors
	
	if(array[x-1][y] - 41 == 1) neighbors++;
	if(array[x+1][y] - 41 == 1) neighbors++;
	if(array[x][y-1] - 41 == 1) neighbors++;
	if(array[x-1][y-1] - 41 == 1) neighbors++;
	if(array[x+1][y-1] - 41 == 1) neighbors++;
	if(array[x][y+1] - 41 == 1) neighbors++;
	if(array[x-1][y+1] - 41 == 1) neighbors++;
	if(array[x+1][y+1] - 41 == 1) neighbors++;

	return neighbors;
}

//****************************************************************
//	Things to remember:
//  ASCII Code for "0" is 40
//	ASCII Code for "*" is 42
//	ASCII Code for "-" is 45
//****************************************************************

void nextGeneration(char array[][SIZE], int i, int j)													//Warning: If I ever want to change back to this...
{
	//This function just replaces the old array with the new array.
	
	int n = checkNeighbors(i, j, array);
	
	//New creature?
	
	if(n == 3){
		array[i][j] = '*';
	}
	
	//Death of creature?
	
	if(array[i][j] == '*'){
		if(n < 2 || n > 3){
			array[i][j] = '-';
		}
	}
}

void startGeneration(char array[][SIZE], int sizen)
{
	int i, j, num, neighnum[sizen][sizen];
	
	//False for empty, True for occupied
	
	//Produces an array only of neighbors
	
	for(i = 0; i < sizen; i++){
		for(j = 0; j < sizen; j++){
			neighnum[i][j] = checkNeighbors(i, j, array);
			printf("%d", neighnum[i][j]);
		}
	}
	
	//Use neighbor array
	
	for(i = 0; i < sizen; i++){
		for(j = 0; j < sizen; j++){
			
			//New creature?
			
			if(array[i][j] = '-' && num == 3){
				array[i][j] = '*';
			}
			
			//Death of creature?
			
			if(array[i][j] = '*'){
				if(num < 2 || num > 3){
					array[i][j] = '-';
				}
			}
			
			//Prints new state
			
			printf("%c", array[i][j]);
			
		}
		printf("\n");
	}
}
