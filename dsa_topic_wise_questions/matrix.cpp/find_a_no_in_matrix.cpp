#include <bits/stdc++.h>
using namespace std;

bool find_target(vector<vector<int>> & matrix, int target){
  if (!matrix.size()) return false;

  int row = matrix.size();
  int col = matrix[0].size();

  int low = 0;
  int high = (row * col) -1;
  while(low <= high){
    int mid = (low + (high - low)/2);
    if (matrix[mid/col][mid%col] == target){
      return true;
    }
    if (matrix[mid/col][mid%col] < target){
      low = mid +1;
    }
    else{
      high = mid - 1;
    }
  }
  return false;
}

int main(){
  int target = 30;
  vector<vector<int>> matrix{{2,5,6,9},
                              {10,12,13,15},
                              {17,24,27,32},
                              {34,35,39,51}};
  cout << find_target(matrix, target) << endl;
  return 0;
}