//************************************************************
// NAME:      FinalProject.c
// PURPOSE:   To play a game of life!
// AUTHOR:    Le-Yi Lin
// HISTORY:   Today......
//*************************************************************

#include <stdio.h>
//#include "simpio.h"
//#include "genlib.h"
//#include "math.h"

#define SIZE 576

//***************************************************
// Functions
//***************************************************

char initArray(int sizex, char array[SIZE][SIZE], int i, int j);		 //Done!
int checkNeighbors(int coordinates[SIZE][SIZE]);		 //Not Done Yet...
char startGeneration();									 //Not Done Yet...
char* getOrdSuffix(int i);								 //Done!


//****************************************************************
//	Things to remember:
//  ASCII Code for "0" is 40
//	ASCII Code for "*" is 42
//	ASCII Code for "-" is 45
//****************************************************************


int main()
{
	int size, places, i, j, k;
	char array[size][size];
	
	//Introduction...
	
	printf("Welcome to the game of life!\n");
	printf("This game is about how creatures '*' interact with each other.\n");
	
	while(1)
	{
		printf("What size do you want your grid to be? (LIMITATION: 576 Places and also must be even)\n");
		scanf("%d", &size);
		
		places = size*size;
		
		printf("\nThe amount of spaces in the grid is: %d places.\n", places);
		
		if(places > 576){
			printf("Your board was too big. Try again!");
		}
		else if(size % 2 == 1){
			printf("Your board was of an odd side. Try again!");
		}
		else break;
		
		printf("\n\n");
	}
	
	int intArray[places];																				//The array of the generations
	
	//Prints a model board
	
	printf("This is your starting board:\n");
	
	initArray(size, array, i, j);
	
	//Generations Start
	
	printf("\n\nHow many generations would you like to see? ");
	scanf("%d", &i);
	
	while(1)
	{
		printf("\nStart Game? Type 1 to continue... ");
		scanf("%d", &j);
		
		if(j == 1) break;
		
		printf("\nThe character you entered was not 1. Try again!\n");
	}

	
	printf("\n%d generations will now appear on your screen...", i);
	
	for(j = 1; j <= i; j++){
		printf("\n\nThe %d%s generation: \n\n", j, getOrdSuffix(j));
		
		//FILL IN GENERATIONS FUNCTION
		
		while(1)
		{
			printf("Proceed to the next generation? Type 1 to proceed...\n");
			scanf("%d", &k);
			
			if(k == 1) break;
			
			printf("Your number is not 1. Try Again!\n\n");
		}
		
		
		
	}
}

char initArray(int sizex, char array[][SIZE], int i, int j)
{
	int a, b;
	
	//Initialize Array
	
	for(a = 0; a<i; i++){
		for(b = 0; b<j; j++){
			array[a][b]=0;
		}
	}
	
	for(a = 0; a<i; i++){
		for(b = 0; b<j; j++){
			if (i==j || i==sizex-j-1){
		    	array[a][b]='*';
		 	} 
			else{
				array[a][b]='-';  
			}
		}
	}
	
	for(a = 0; a<i; i++){
		for(b = 0; b<j; j++){
			printf("%c ", array[a][b] );
		}
		printf("\n");
	}
}

//************************************************************
// NAME:      getOrdSuffix
// PURPOSE:   The 1st, 2nd, 3rd suffixes etc
// PASSED:    int i - The number
// RETURNED:  The suffix
//*************************************************************

char* getOrdSuffix(int i)
{
	int lastDigit;
	char* os;
	/* Determine ordinal suffix */
	lastDigit = i % 10;
	if (i >= 4 && i <= 20)
		os = "th";
	else if (i == 0 || lastDigit == 0)
		os = "th";
	else if (i == 1 || lastDigit == 1)
		os = "st";
	else if (i == 2 || lastDigit == 2)
		os = "nd";
	else if (i == 3 || lastDigit == 3)
		os = "rd";
	else
		os = "th";

	return os;
}
