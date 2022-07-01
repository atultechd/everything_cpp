#include <iostream>
using namespace std;

int max_sum_two_non_overlapping_subarr(int arr[], int n, int x, int y){
  int dp1[n];
  int dp2[n];
  int sum = 0;

  for (int i = 0; i < n; ++i){
    if (i < x){
      sum += arr[i];
      dp1[i] = sum;
    }
    else {
      sum += arr[i] - arr[i-x];
      dp1[i] = max(dp1[i-1], sum); 
    }
  }

  sum = 0;
  for (int i = n-1; i >= 0; i--){
    if (i+y >= n){
      sum += arr[i];
      dp2[i] = sum;
    }
    else{
      sum += arr[i] - arr[i+y];
      dp2[i] = max(dp2[i+1], sum);
    }
  }

  int ans = 0;
  for (int i = x-1; i < n-y; ++i){
    ans = max(ans, dp1[i] + dp2[i+1]);
  }

  dp1[n];
  dp2[n];
  sum = 0;

  for (int i = 0; i < n; ++i){
    if (i < y){
      sum += arr[i];
      dp1[i] = sum;
    }
    else {
      sum += arr[i] - arr[i-y];
      dp1[i] = max(dp1[i-1], sum); 
    }
  }

  sum = 0;
  for (int i = n-1; i >= 0; --i){
    if (i+x >= n){
      sum += arr[i];
      dp2[i] = sum;
    }
    else{
      sum += arr[i] - arr[i+x];
      dp2[i] = max(dp2[i+1], sum);
    }
  }

  for (int i = y-1; i < n-x; ++i){
    ans = max(ans, dp1[i] + dp2[i+1]);
  }

  return ans;
}

int main(){
  int n = 9;
  int arr[] = {0,6,5,2,2,5,1,9,4};
  cout << max_sum_two_non_overlapping_subarr(arr, n, 1, 2) << endl;
  return 0;
}