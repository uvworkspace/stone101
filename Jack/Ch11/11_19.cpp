#include <iostream>
#include <iomanip>
using namespace std;
const int ROW = 3,COL = 5;
using Matrix = int[ROW][COL];

void matrix_input(Matrix m){
  cout << "Enter " << ROW << " ROW of the matrix:\n";
  for (int row = 0; row < ROW; row++){
    cout << "#" << row+1 << " row: Please enter " << COL << " elements of this row:\n";
    for (int &e : m[row])
      cin >> e;
  }
}

void print_matrix(const Matrix m){
  for(int row = 0; row < ROW; row++){
    for(int col = 0; col < COL; col++)
      cout << setw(3) << m[row][col];
    cout << "\n";
  }
}

int main(){ 
  Matrix m;
  matrix_input(m);
  print_matrix(m);
}