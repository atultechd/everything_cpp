#include<iostream>
using namespace std;

#define M 8
#define N 8

void flood_fill(int my_screen[][N], int x, int y, int curr_color, int new_color){
  if (x < 0 || x >= M || y < 0 || y >= N){
    return;
  }
  if (my_screen[x][y] != curr_color){
    return;
  }
  if (my_screen[x][y] == new_color){
    return;
  }

  my_screen[x][y] = new_color;

  flood_fill(my_screen, x+1, y, curr_color, new_color);
  flood_fill(my_screen, x-1, y, curr_color, new_color);
  flood_fill(my_screen, x, y+1, curr_color, new_color);
  flood_fill(my_screen, x, y-1, curr_color, new_color);
}

void find_color(int my_screen[][N], int x, int y, int new_color){
  int curr_color = my_screen[x][y];
  flood_fill(my_screen, x, y, curr_color, new_color);
}

int main(){
  int my_screen[M][N] = {{3,2,1,1,1,1,1,1},
                         {1,1,1,1,1,1,0,0},
                         {1,0,0,1,1,0,1,1},
                         {1,2,2,2,2,0,1,0},
                         {1,1,1,2,2,2,2,0},
                         {1,1,1,1,1,2,1,1},
                         {1,1,2,2,0,1,0,0}};

  int x = 4, y = 4, new_color = 3;
  find_color(my_screen, x, y, new_color);

  cout << "Updated my screen:" << endl;

  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      cout << my_screen[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}