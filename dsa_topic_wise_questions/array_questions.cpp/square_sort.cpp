#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
  for (int i = 0; i < n-1; ++i){
    for (int j = i; j < n; ++j){
      if (arr[i] > arr[j]){
        // swap(arr[i] , arr[j]);        
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (int i = 0; i < n; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[] = {4, -15, 0, -9 ,-8 ,-1, 6};
  int n = sizeof(arr)/ sizeof(arr[0]);
  for (int i = 0; i < n; ++i){
   arr[i] = pow(arr[i], 2);
  }
  sort(arr, n);
  return 0;
}