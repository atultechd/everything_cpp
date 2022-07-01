#include <iostream>
using namespace std;

#define INT_MAX 1e9

int min(int a , int b){
  if (a < b){
    return a;
  }
  else {
    return b;
  }
}

int coin_exchange(int coins[], int sum, int n){

  int t[n+1][sum+1];
  if(sum == 0){
    return 1;
  }
  if (sum < 0){
    return 0;
  }
  for (int i = 0; i < sum+1 ; ++i){
    t[0][i] = INT_MAX-1;
  }
  for (int i = 1; i < n+1 ; ++i){
    t[i][0] = 0;
  }

  for(int i = 1; i < sum+1 ; i++){
    if (i % coins[0] == 0){
      t[1][i] = i/coins[0];
    }
    else{
      t[1][i] = INT_MAX-1;
    }
  }

  for (int i = 2; i < n+1; ++i){
    for (int j = 1; j < sum+1; ++j){
      if (coins[i-1] <= j){
        t[i][j] = min(t[i-1][j] , 1 + t[i][j-coins[i-1]]);
      }
      else {
        t[i][j] = t[i-1][j];
      }
    }
  }
  return t[n][sum];
}


int main(){
  int sum = 10, n = 3;
  int coins[]= {1, 2, 5};

  cout << coin_exchange(coins, n, sum);
  return 0;
}