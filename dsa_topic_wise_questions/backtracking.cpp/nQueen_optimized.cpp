#include <iostream>
using namespace std;
#define N 4

int ld[30] = {0};
int rd[30] = {0};
int cl[30] = {0};

void print_sol(int board [N][N]){
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N; ++j){
      cout << board [i][j] << " ";
    }
    cout << endl;
  }
}

bool solve_nQueen(int board [N][N], int col){
  if (col >= N){
    return true;
  }
  for (int i = 0; i < N; ++i){
    if ((ld[i-col+N-1] != 1 && rd[i+col] != 1) && cl[i] != 1){
      board [i][col] = 1;
      ld[i-col+N-1] = rd[i+col] = cl[i] = 1;

      if (solve_nQueen(board, col+1)){
        return true;
      }
      board[i][col] = 0;
      ld[i-col+N-1] = rd[i+col] = cl[i] = 0;
    }
  }
  return false;
}

bool sol_possible(){
  int board[N][N]= {{0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};
  if (solve_nQueen(board,0)==false){
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