#include<bits/stdc++.h>
using namespace std;

vector<int> spiral_order(const vector<vector<int>> &arr, int m, int n){
  int top = 0, bottom = n-1, left = 0, right = m -1;
  int dir = 0;
  vector<int> ans;
};
  while(top <= bottom && left <= right){
    if (dir == 0){
      for (int i = left; i <= right; ++i){
        ans.push_back(arr[top][i]);
      }
      top ++;
    }
    else if (dir == 1){
      for (int i = top; i <= bottom; ++i){
        ans.push_back(arr[i][right]);
      }
      right --;
    }
    else if (dir == 2){
      for (int i = right; i >= left; --i){
        ans.push_back(arr[bottom][i]);
      }
      bottom --;
    }
    else if (dir == 3){
      for (int i = bottom; i >= top; --i){
        ans.push_back(arr[i][left]);
      }
      left ++;
    }
    dir = (dir+1)% 4;
  }
  return ans;
}

int main(){
  int m = 4, n = 4;
  vector<vector<int>> arr{{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
  for (int x: spiral_order(arr, m, n)){
    cout << x << " ";
  }
  cout << endl;
  return 0;
}