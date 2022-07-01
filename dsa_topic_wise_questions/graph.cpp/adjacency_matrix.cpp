#include <iostream>
#include <iomanip>
using namespace std;

void print_matrix(int matrix[][10], int n){
  int i,j;
  cout << "\n\n" << setw(4) << " ";
  for (int i = 0; i < n; ++i){
    cout << setw(3) << "(" << i+1 << ")";
  }
  cout << "\n\n";
  for (int i = 0; i < n; ++i){
    cout << setw(3) << "(" << i+1 << ")";
    for (int j = 0; j < n; ++j){
        cout << setw(4) << matrix[i][j];
    }
    cout << "\n\n";
  }
  
}

int main(){
  int i,j,v;
  cout << "Enter the no. of vertexes :";
  cin >> v;
  int matrix[10][10];
  cout << "\n";

  for (int i = 0; i < v; ++i){
    for (int j = i; j < v; ++j){
      if (i != j){
        cout << "Enter 1 if vertex " << i+1 << " is adjacent to " << j+1;
        cout << " otherwise 0 :";
        cin >> matrix[i][j];
        matrix[j][i] = matrix[i][j];
      }
      else {
        matrix[j][i] = 0;
      }
    }
  }
  print_matrix(matrix, v);

  return 0;
}