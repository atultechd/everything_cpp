#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
  if (a > b){
    return a;
  }
  else {
    return b;
  }
}

int static t[1001][1001];

int lcs(char x[], int m, char y[], int n){
  int ans;
  for (int i = 0; i < m+1; ++i){
    for (int j = 0; j < n+1; ++j){
      if (i == 0 || j == 0){
         t[i][j] = 0;
      }
    }
  }

  for (int i = 1; i < m+1; ++i){
    for (int j = 1; j < n+1; ++j){
      if (x[i-1] == y[j-1]){
        t[i][j] = 1 + t[i-1][j-1];
        ans = max(ans, t[i][j]);
      }
      else {
        t[i][j] = 0;
      }
    }
  }
  return ans;
}

int main(){
  // memset(t, -1, sizeof(t));
  // Condition : Char array should always be sorted.
  char x[] = "abcdefikpr";
  char y[] = "beffetkrs";    
  int m = strlen(x);
  int n = strlen(y);
  cout << lcs(x, m, y, n) << endl;
  return 0;
}