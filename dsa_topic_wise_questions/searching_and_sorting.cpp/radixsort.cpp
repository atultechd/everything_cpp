#include <bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n, int exp){
  int count[10] = {0};
  for(int i=0; i<n; i++){
    count[arr[i]/exp % 10]++;
  }
  for(int i=1; i<10; i++){
    count[i] += count[i-1];
  }
  int output[n];
  for(int i=n-1; i>=0; i--){
    int pos = count[arr[i]/exp %10]-1;
    output[pos] = arr[i];
    count[arr[i]/exp %10]--;
  }
  for (int i = 0; i < n; ++i){
    arr[i] = output[i];
  }
}

void radixsort(int arr[], int n){
  int maxi = INT_MIN;
  for(int i=0; i<n; i++){
    maxi = max(maxi, arr[i]);
  }
  int exp = 1;
  while(exp <= maxi){
    countsort(arr, n, exp);
    exp = exp*10;
  }
}


int main(){
  int arr[] = {10, 23, 2, 109, 55, 8, 63, 47};
  int n = 8;
  radixsort(arr, n);
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}