#include <bits/stdc++.h>
using namespace std;

void common_elements(vector<vector<int>> &matrix){
  int r = matrix.size();
  int c = matrix[0].size();

  unordered_map<int, int> m;
  for (int i = 0; i < c; ++i){
    m[matrix[0][i]] = 1;
  }

  for (int i = 1; i < r; ++i){
    for (int j = 0; j < c; ++j){

      if (m[matrix[i][j]]==i){
        m[matrix[i][j]] = i+1;

        if (i==r-1 && m[matrix[i][j]]==r){
          cout << matrix[i][j]<< " ";
        }
      }
    }
  }
  cout << endl;
}

int main(){
  vector<vector<int>> matrix {{1,5,6},
                              {3,7,1},
                              {4,9,1}};
  common_elements(matrix);
  return 0;
}