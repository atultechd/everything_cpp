#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
  if (a > b) 
    return a;
  else 
    return b;
}

int rod_cut(int L, int length[], int price[], int n){

  vector<vector<int>> t(n+1, vector<int> (L+1));

  for (int i = 1; i < n+1; ++i){
    for (int j = 1; j < L+1; ++j){
      if (length[i-1] <= j){
        t[i][j] = max(price[i-1] + t[i][j-length[i-1]] , t[i-1][j]);
      }
      else {
        t[i][j] = t[i-1][j];
      }
    }
  }
  return t[n][L];
}

int main()
{
    int length[] = {1, 2, 3, 4 ,5 ,6, 7, 8};
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int L = 8;
    int n = sizeof(price) / sizeof(price[0]);
     
    cout << rod_cut(L, length, price, n) << endl;
     
    return 0;
}