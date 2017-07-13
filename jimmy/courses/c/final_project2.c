//************************************************************
// NAME:      FinalProject.c
// PURPOSE:   To play a game of life!
// AUTHOR:    Le-Yi Lin
// HISTORY:   Today......
//*************************************************************

#include <stdio.h>
//#include "simpio.h"
//#include "genlib.h"
#include "math.h"

#define SIZE 25																//Make this 1 larger than your actual limit

//***************************************************
// Array Move Functions
//***************************************************

void initArray(int sizex, char array[][SIZE]);								 //Done!
void printArray(int sizex, char array[][SIZE]);								 //Done!
void transferArray(int sizen, char array[][SIZE], char array2[][SIZE]);		 //Done!

//***************************************************
// Main Functions
//***************************************************

int checkNeighbors (int x, int y, int sizen, char array[][SIZE]);			 //Done!
void startGeneration (char array[][SIZE], int sizen);						 //Check this...
int endGeneration (char array1[][SIZE], char array2[][SIZE], int sizen);	 //WIP
char* getOrdSuffix(int i);													 //Done!


//****************************************************************
//	Things to remember:
//  ASCII Code for "0" is 40
//	ASCII Code for "*" is 42
//	ASCII Code for "-" is 45
//****************************************************************


int main()
{
	while(1)
	{
	    //Define the variables:
	    int size, places, i, j, k;
	    
	    //Introduction...
	    
	    printf("Welcome to the game of life!\n");
	    printf("This game is about how creatures '*' interact with each other.\n");
	    
	    while(1)
	    {
	        printf("What size do you want your grid to be? (LIMITATION: %d Places)\n", SIZE*SIZE);
	        scanf("%d", &size);
	        
	        places = size*size;
	        if(size < 0) places = 0;
	        
	        printf("\nThe amount of spaces in the grid is: %d places.\n", places);
	        
	        if(size > SIZE){
	            printf("Your board was too big. Try again!");
	        }
	        else if(places == 0){
	            printf("\nYou have found an easter egg! Lol, you CANNOT have a grid with 0 spaces! Try again!\n");								//Easter Egg!
	        }
	        else break;
	        
	        printf("\n\n");
	    }
	    
	    char array[SIZE][SIZE], array2[SIZE][SIZE];
	    int generations;
	    
	    //Prints a model board
	    
	    printf("This is your starting board:\n");
	    
	    initArray(size, array);
	    initArray(size, array2);
	    printArray(size, array);
	    
	    //Sees how many generations you want
	    
	    while(1)
	    {
	        printf("\n\nHow many generations would you like to see? ");
	        scanf("%d", &i);
	        
	        if(i <= 0){
	            printf("\n\nYou have found an easter egg! Lol, you CANNOT print out 0 or less generations ;) Try again!\n");					//Easter Egg!
	        }
	        else break;
	    }
	    
	    //Starts the game ;)
	
	    while(1)
	    {
	        printf("\nStart Game? Type 1 to continue... ");
	        scanf("%d", &j);
	        
	        if(j == 1) break;
	        
	        printf("\nThe character you entered was not 1. Try again!\n");
	    }
	    
	    //Generations come in
	    
	    printf("\n%d generations will now appear on your screen...", i);
	    
	    for(generations = 1; generations <= i; generations++){
	        if(generations != i){
	            printf("\n\nThe %d%s generation: \n\n", generations, getOrdSuffix(generations));
	        }
	        else{
	            printf("\n\nThe final (%d%s) generation: \n\n", generations, getOrdSuffix(generations));
	        }
	        
	        transferArray(size, array, array2);        
	        startGeneration (array, size);
	        printArray(size, array);
	        
	        if(generations != i){
	            while(1)
	            {
	                printf("Proceed to the next generation? Type 1 to proceed...\n");
	                scanf("%d", &k);
	                
	                if(k == 1) break;
	                
	                printf("Your number is not 1. Try Again!\n\n");
	            }
	        }
	        
	    }
	    
	    

      int again;	
   	 	printf("It's all over! Want to play again? Type 1 for yes.\n");
    	scanf("%d", &again);
	    if(again == 1){
	    	printf("\nLets play again ;) \n\n\n");
    	}
	    else {
	    	break;
    	}
	   
	   
	}	
}

//********************************************************************************************************
// NAME:      initArray
// PURPOSE:   Starts a new board
// PASSED:    int sizex, char array[SIZE][SIZE] - The size and the array
// RETURNED:  The starting board......
//*********************************************************************************************************


void initArray(int sizex, char array[][SIZE])
{
    int a, b;
    
    for(a = 0; a<sizex; a++){
        for(b = 0; b<sizex; b++){
            if (a==b || a==sizex-b-1){
                array[a][b]='*';
            }
            else{
                array[a][b]='-';
            }
        }
    }
}

//********************************************************************************************************
// NAME:      printArray
// PURPOSE:   Prints the board
// PASSED:    int sizen, char array[][SIZE] - The size and the array
// RETURNED:  The starting board......
//*********************************************************************************************************

void printArray(int sizen, char array[][SIZE])
{
    int i, j;
    
    for(i = 0; i < sizen; i++){
        for(j = 0; j < sizen; j++){
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
}

//********************************************************************************************************
// NAME:      printArray
// PURPOSE:   Prints the board
// PASSED:    int sizen, char array[SIZE][SIZE], char array2[SIZE][SIZE] - The size and the array
// RETURNED:  The starting board......
//*********************************************************************************************************

void transferArray(int sizen, char array[][SIZE], char array2[][SIZE])								//Transfers array to array2
{
    int i, j;
    
    for(i = 0; i < sizen; i++){
        for(j = 0; j < sizen; j++){
            array2[i][j] = array[i][j];
        }
    }
}

//********************************************************************************************************
// NAME:      checkNeighbors
// PURPOSE:   Checks how many neighbors the thing has;
// PASSED:    int x, int y, int sizen, char array[][SIZE] - The coordinates, The size, and the array
// RETURNED:  int - The new board
//*********************************************************************************************************

int checkNeighbors (int x, int y, int sizen, char array[][SIZE])
{
    int neighbors = 0;
    
    //X is the coordinates in the array, so is y.
    //Use this in a loop like for the array
    
    //This adds up the amount of neighbors
    
    if(x-1 >= 0 && array[x-1][y] - 41 == 1) neighbors++;
    if(x+1 < sizen && array[x+1][y] - 41 == 1) neighbors++;
    if(y-1 >= 0 && array[x][y-1] - 41 == 1) neighbors++;
    if(y+1 < sizen && array[x][y+1] - 41 == 1) neighbors++;
    if(x-1 >=0 && y-1 >=0 && array[x-1][y-1] - 41 == 1) neighbors++;
    if(x+1 < sizen && y-1 >= 0 &&array[x+1][y-1] - 41 == 1) neighbors++;
    if(x-1 >=0 && y+1 < sizen && array[x-1][y+1] - 41 == 1) neighbors++;
    if(x+1 < sizen && y+1 < sizen && array[x+1][y+1] - 41 == 1) neighbors++;
    
    return neighbors;
}

//**********************************************************************************
// NAME:      startGeneration
// PURPOSE:   Gives the new state of the board
// PASSED:    char array[][SIZE], int sizen - The board and the size
// RETURNED:  char - The new board
//***********************************************************************************

void startGeneration(char array[][SIZE], int sizen)
{
    int i, j, neighnum[sizen][sizen];
    
    //False for empty, True for occupied
    
    //Produces an array only of neighbors
    
    for(i = 0; i < sizen; i++){
        for(j = 0; j < sizen; j++){
            neighnum[i][j] = checkNeighbors(i, j, sizen, array);
            printf("%d", neighnum[i][j]);
        }
        printf("\n");
    }
    
    
    //Use neighbor array
    
    for(i = 0; i < sizen; i++){
        for(j = 0; j < sizen; j++){
            
            //New creature?
            
            if(array[i][j] == '-' && neighnum[i][j] == 3){
                array[i][j] = '*';
            }
            
            //Death of creature?
            
            if(array[i][j] == '*'){
                if(neighnum[i][j] < 2 || neighnum[i][j] > 3){
                    array[i][j] = '-';
                }
            }
        }
    }
}

//************************************************************
// NAME:      endGeneration
// PURPOSE:   Sees if no more generations will be made.
// PASSED:    char array1[][SIZE], char array2[][SIZE], int sizen - The stuff.
// RETURNED:  "No more generations will be made ;)"
//*************************************************************

int endGeneration (char array1[][SIZE], char array2[][SIZE], int sizen) {
  int i, j;
  int changes = 0;
  
  for(i = 0; i < sizen; i++) {
    for(j = 0; j < sizen; j++) {
        if(array1[i][j] != array2[i][j]) return 1;
    }
  }
  
  return 0;
}


//************************************************************
// NAME:      getOrdSuffix
// PURPOSE:   Prints 1st, 2nd, 3rd suffixes etc
// PASSED:    int i - The number
// RETURNED:  The suffix
//*************************************************************

char* getOrdSuffix(int i)
{
    int lastDigit;
    char* os;
    
    //Determine ordinal suffix
    
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
