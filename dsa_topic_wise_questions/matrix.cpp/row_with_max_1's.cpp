#include <bits/stdc++.h>
using namespace std;

int max_one(vector<vector<bool>> &matrix, int row, int col){
  int j = col-1;
  while(j >= 0 && matrix[0][j] == 1){
    j--;
  }
  int row_1 = 0;
  for (int i = 1; i < row; ++i){
    while(j >= 0 && matrix[i][j]==1){
      j--;
      row_1 = i;
    }
  }
  return row_1;
}

int main(){
  int row = 4;
  int col = 4;
  vector<vector<bool>> matrix{{1,1,1,1},
                             {0,0,1,1},
                             {0,1,1,1},
                             {0,0,1,1}};
  cout << max_one(matrix, row, col)<< endl;
  return 0;
}
