#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

void matrix_input(Matrix &m){
  cout << "Enter " << m.size() << " rows of the matrix:\n";
  for (int row = 0; row < m.size(); row++){
    cout << "#" << row+1 << " row: Please enter " << m[row].size() << " elements of this row:\n";
    for (int &e : m[row])
      cin >> e;
  }
}

void print_matrix(const Matrix m){
  for(auto row : m){
    for(int e : row)
      cout << e << " ";
    cout << '\n';
  }
}

int main(){
  int row, col;
  cout << "Enter the row size of the matrix:\n";
  cin >> row;
  cout << "Enter the column size of the matrix:\n";
  cin >> col;
  Matrix m(row, vector<int>(col));
  matrix_input(m);
  print_matrix(m);
}