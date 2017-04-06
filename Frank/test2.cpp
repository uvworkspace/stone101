#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int num, input, i=0, j=0;
    int** arr = new int*[num] ;
    for ( int n=0 ; n < num ; ++i ){
        arr[i] = new int[5];
    }
    while (cin >> num ){
            while (cin >> input && i < num){
                arr[i][j] = input;
                j++;
                if (j == 4)
                    i++;
                    j = 0;
            }                                                                   //put the inputs in the two dim array
                
            for (int k = 0 ; k < num ; k++){
                for (int m = 0 ; m < 2 ; m++){
                    if ( ( arr[k][m+1] - arr[k][m] ) == ( arr[k][m+2] - arr[k][m+1] ) ) 
                        arr[k][4] = arr[k][3] + (arr[k][m+1] - arr[k][m]);
                    else
                        arr[k][4] = arr[k][3] * ( arr[k][m+1] / arr[i][m] );
                }
            }
                
                
            for (int k = 0 ; k < num ; k++){
                for (int m = 0 ; m <= 4 ; m++){
                    cout << arr[k][m] << " " ;
                }
                cout << endl ;
            }
    }
    return 0;
} 