// optimized code for lcs

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

  if (m == 0 || n == 0){
    return 0;
  }

  if (t[m][n] != -1){
    return t[m][n];
  }

  if (x[m-1] == y[n-1]){
    return t[m][n] = (1 + lcs(x, m-1, y, n-1));
  }
  else {
    return t[m][n] = max(lcs(x, m-1, y, n) , lcs(x, m, y, n-1));
  }
}

int main(){
  memset(t, -1, sizeof(t));
  // Condition : Char array should always be sorted.
  char x[] = "abcdef";
  char y[] = "beffet";    
  int m = strlen(x);
  int n = strlen(y);
  cout << lcs(x, m, y, n) << endl;
  return 0;
}