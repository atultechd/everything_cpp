#include <iostream>
#include <vector>
using namespace std;
#define INF 1e9

void youngify(vector<vector<int>> &matrix, int N, int row, int col){
  int down_val = (row+1 < N)? matrix[row+ 1][col]: INF;
  int right_val = (col+1 < N)? matrix[row][col + 1]: INF;  

  if (down_val == INF && right_val == INF) return;
  if (down_val < right_val){
    matrix[row][col] = down_val;
    matrix[row + 1][col] = INF;
    youngify(matrix, N, row+1, col);
  }
  else{
    matrix[row][col] = right_val;
    matrix[row][col + 1] = INF;
    youngify(matrix, N, row, col+1);
  }
}

int exact_min(vector<vector<int>>&matrix, int N){
  int ret = matrix[0][0];
  matrix[0][0] = INF;
  youngify(matrix, N, 0, 0);
  return ret;
}

void print_sorted_array(vector<vector<int>>&matrix, int N){
  for (int i = 0; i < N * N; ++i){
    cout << exact_min(matrix, N) << " ";
  }
  cout << endl;
}

int main(){
  int N = 3;
  vector<vector<int>> matrix{{1,4,5},
                              {2,6,8},
                              {3,7,9}};
  print_sorted_array(matrix, N);
  return 0;
}

// complexity is 0(N^2logN)

