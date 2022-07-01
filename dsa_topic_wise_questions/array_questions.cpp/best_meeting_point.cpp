#include <bits/stdc++.h>
using namespace std;
#define row 3
#define col 5

int min_total_distance(int grid[][col]){
  // 1. get x-coordinate -> row wise
  //    get y-coordinate -> column wise
  vector<int> horizontal;
  vector<int> vertical;
  for(int r = 0; r < row; r++){
    for(int c = 0; c < col; c++){
      if (grid[r][c] == 1){
        horizontal.push_back(r);
        vertical.push_back(c);
      }
    }
  }
  sort(horizontal.begin(), horizontal.end());
  sort(vertical.begin(), vertical.end());

  // 3. get mid -> best meeting point
  int size = vertical.size()/2;
  int x = horizontal[size];
  int y = vertical[size];

  // 4. calculate distance -> min distance(because of medium)
  int distance = 0;
  for(int r = 0; r < row; r++){
    for (int c = 0; c < col; ++c){
      if (grid[r][c] == 1){
        distance += abs(x - r) + abs(y - c);
      }
    }
  }
  // 5. return ans
  return distance;
}

int main(){
  int grid[3][5] = {{1,0,0,0,1},
                    {0,0,0,0,0},
                    {0,0,1,0,0}};
  cout << min_total_distance(grid) << endl;
  return 0;
}