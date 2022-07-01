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

int lcs(char x[], int m, char y[], int n){
  if (m == 0 || n == 0){
    return 0;
  }
  if (x[m-1] == y[n-1]){
    return (1 + lcs(x, m-1, y, n-1));
  }
  else {
    return max(lcs(x, m-1, y, n) , lcs(x, m, y, n-1));
  }
}

int main(){
  // Condition : Char array should always be sorted.
  char x[] = "abcdef";
  char y[] = "befft";    
  int m = strlen(x);
  int n = strlen(y);
  cout << lcs(x, m, y, n) << endl;
  return 0;
}