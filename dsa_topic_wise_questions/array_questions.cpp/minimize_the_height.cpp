#include <bits/stdc++.h>
using namespace std;

int get_min_diff(int arr[], int n, int k){
  int mini = 0, maxi = 0, result = 0;
  sort(arr, arr+n);
  result = arr[n-1]-arr[0];
  for(int i = 1; i < n; i++){
    if (arr[i] >= k){
      maxi = max(arr[i-1]+k, arr[n-1]-k);
      mini = min(arr[i]-k, arr[0]+k);
      result = min(result, maxi-mini);
    }
    else{
      continue;
    }
  }
  return result;
}

int main(){
  int n = 5;
  int arr[] = {3,9,12,16,20};
  cout << get_min_diff(arr, n, 3) << endl;
}