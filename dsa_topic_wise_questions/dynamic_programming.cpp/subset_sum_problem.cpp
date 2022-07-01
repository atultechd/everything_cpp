#include <bits/stdc++.h>
using namespace std;


bool is_subset_sum(int sum, int arr[], int n){

  bool subset[n+1][sum+1];

  for (int i = 0; i < n; ++i){
    return subset[i][0] = true;
  } 
  for (int i = 1; i < sum; ++i){
    return subset[0][i] = false;
  }


  for (int i = 1; i < n; ++i){
    for (int j = 1; j < sum; ++j){
      if (arr[i-1] <= j){
        subset[i][j] =  subset[i-1][j-arr[i-1]] || subset[i-1][j];
      }
      else {
        subset[i][j] = subset[i-1][j];
      }
    }
  }
  return subset[n][sum];
}

int main()
{
    int arr[] = {2, 8, 10, 3, 5};
    int sum = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
     
    if (is_subset_sum(sum, arr, n)){
      cout << "found a subset with given sum" << endl;
    }
    else{
      cout << "not found a subset with given sum" << endl;
    } 
    return 0;
}