#include <bits/stdc++.h>
using namespace std;

int first_missing(int arr[], int n){
  bool one = false;
  for (int i = 0; i < n; ++i){
    if (arr[i] == 1){
      one = true;
    }
    if (arr[i] < 1 || n < arr[i]){
      arr[i] = 1;
    }
  }

  if (one == false) return 1;
  for (int i = 0; i < n; ++i){
    int index = abs(arr[i]);
    arr[index - 1] = - abs(arr[index - 1]);
  }

  for (int i = 0; i < n; ++i){
    if (arr[i] > 0){
      return i + 1;
    }
  }
  return n + 1;
}

int main(){
  int n = 8;
  int arr[] = { 2, 3, -7, 6, 8, 1, -10, 15 };
  cout << first_missing(arr, n) << endl;
  return 0;
}