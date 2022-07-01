  #include <iostream>
using namespace std;
#define N 4


bool is_safe(int maze[N][N], int x, int y){
  if (x>=0 && x<N && y>=0 && x<N && maze[x][y] == 1){
    return true;
  }
  return false;
}

bool solve_maze(int maze[N][N], int x, int y, int sol[N][N]){
  if (x==N-1 && y==N-1 && maze[x][y] == 1){
    sol[x][y] = 1;
    return true;
  }

  if (is_safe(maze, x, y)==true){
    if (sol[x][y]==1){
      return false;
    }
    sol[x][y] = 1;

    if (solve_maze(maze, x+1, y, sol)==true){
      return true;
    }
    if (solve_maze(maze, x, y+1, sol)==true){
      return true;
    }
    if (solve_maze(maze, x-1, y, sol)==true){
      return true;
    }
    if (solve_maze(maze, x, y-1, sol)==true){
      return true;
    }

    sol[x][y] = 0;
    return false;
  }
  return false;
}


void print_sol(int sol[N][N]){
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N; ++j){
      cout << sol[i][j] << " ";
    }
    cout << endl;
  }
}

bool maze_possible(int maze[N][N]){
  int sol[N][N] = {{0,0,0,0},
                   {0,0,0,0},
                   {0,0,0,0},
                   {0,0,0,0}};

  if (solve_maze(maze, 0, 0, sol) == false){
    cout <<"Solution doesnot exist" ;
    return false;
  }
  print_sol(sol);
  return true;
}


int main(){
  int maze[N][N]= {{1,0,0,0},
                   {1,1,0,1},
                   {0,1,0,0},
                   {1,1,1,1}};

  maze_possible(maze);
  return 0;
}