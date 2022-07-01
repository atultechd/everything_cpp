#include <bits/stdc++.h>
using namespace std;

int atleast_twice(int arr[], int n){
  int maxof = 0;
  int temp;
  for (int i = 0; i < n; ++i){
    maxof = max(maxof , arr[i]);
  }
  for (int i = 0; i < n; ++i){
    if (maxof == arr[i]){
      temp = i;
    }
  }
  for (int i = 0; i < n-1; ++i){
    for (int j = i; j < n; ++j){
      if (arr[i] > arr[j]){    
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  } 
  if (arr[n-1] >= 2*arr[n-2]){
    return temp;
  }
  else{
    return -1;
  }
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << "index at which max element present is " << atleast_twice(arr, n) << endl;
  return 0;
}
      