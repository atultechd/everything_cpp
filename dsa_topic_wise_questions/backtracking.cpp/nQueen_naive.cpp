#include <iostream>
using namespace std;
#define N 4

void print_sol(int board[N][N]){
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N; ++j){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

bool is_safe(int board[N][N], int row, int col){
  int i,j;
  for (i = 0; i < col; ++i){
    if (board[row][i]){
      return false;
    }
  }

  for (i = row, j = col; i>=0 && j>=0; i--, j--){
    if (board[i][j]){
      return false;
    }
  }

  for (i = row, j = col; i<N && j>=0; i++, j++){
    if (board[i][j]){
      return false;
    }
  }

  return true;

}

bool solve_nqueen(int board[N][N], int col){
  if (col>=N){
    return true;
  }

  for (int i = 0; i < N; ++i){
    if (is_safe(board, i, col)){
      board[i][col] = 1;

      if (solve_nqueen(board, col+1)){
        return true;
      }
      board[i][col] = 0;
    }
  }

  return false;
}

bool sol_possible(){
  int board[N][N]= {{0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};
  if (solve_nqueen(board,0)==false){
    cout << "Solution doesnot exist";
    return false;
  }
  print_sol(board);
  return true;

}

int main(){

  sol_possible();
  return 0;
}