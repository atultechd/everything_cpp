#include <iostream>
#include <vector>
using namespace std;

int kth_smallest(vector<vector<int>> &matrix, int k){
  int r = matrix.size();
  int c = matrix[0].size();
  int s = matrix[0][0];
  int e = matrix[r-1][c-1];
  int midval;

  while(s <= e){
    midval = (s + e )/ 2;
    int ans = 0;
    for (int i = 0; i < r; ++i){
      int low = 0, high = c-1, m;
      while(low <= high){
        m = low + (high-low )/2;
        if (matrix[i][m] <= midval){
          low = m + 1;
        }
        else{
          high = m -1;
        }
      }
      ans += low;
    }
    if (ans < k){
      s = midval+1;
    }
    else{
      e = midval-1;
    }
  }
  return s;
}

int main(){
  int k = 6;
  vector<vector<int>> matrix {{1,5,6},
                              {3,7,8},
                              {4,9,10}};
  cout << kth_smallest(matrix, k) << endl;
  return 0;
}