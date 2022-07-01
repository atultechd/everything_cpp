#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix, int N){
  for (int j = 0; j < N; ++j){
    for (int i = N-1; i >= 0; --i){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  int N = 4;
  vector<vector<int>> matrix{{1,2,3,4},
                              {5,6,7,8},
                              {9,10,11,12},
                              {13,14,15,16}};
  rotate(matrix, N);
  return 0;
}