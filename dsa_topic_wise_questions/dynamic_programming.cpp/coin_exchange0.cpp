#include <iostream>
using namespace std;

int coin_exchange(int coins[], int sum, int n){

  int t[n+1][sum+1];
  if(sum == 0){
    return 1;
  }
  if (sum < 0){
    return 0;
  }
  for (int i = 0; i < sum+1 ; ++i){
    t[0][i] = 0;
  }
  for (int i = 1; i < n+1 ; ++i){
    t[i][0] = 1;
  }
  
  for (int i = 1; i < n+1; ++i){
    for (int j = 1; j < sum+1; ++j){
      if (coins[i-1] <= j){
        t[i][j] = t[i-1][j] + t[i][j-coins[i-1]];
      }
      else {
        t[i][j] = t[i-1][j];
      }
    }
  }
  return t[n][sum];
}


int main(){
  int sum, n;
  cin >> sum >> n;
  for (int i = 0; i < n; ++i){
    cin >> coins[i];
  }

  cout << coin_exchange(coins, n, sum);
  return 0;
}