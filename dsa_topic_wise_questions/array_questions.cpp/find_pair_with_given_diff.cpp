#include <bits/stdc++.h>
using namespace std;

void find_pair(int arr[], int n , int diff){
  for (int i = 0; i < n; ++i){
    for (int j = n-1; j >= 0; --j){
      if (arr[i]-arr[j] == diff || arr[j]-arr[i] == diff ){
        cout << arr[i] << ", " << arr[j] << endl;
      }
      break;
    }
  }
}

bool find_pair_optimised(int arr[], int n, int diff){
  sort(arr, arr+n);
  int i = 0;
  int j = 1;
  while(i < n && j < n){
    if (i != j && (arr[i]-arr[j] == diff || arr[j]-arr[i] == diff)){
      cout << "found " << arr[i] << ", " << arr[j] << endl;
      return true;
    }
    else if (arr[j]-arr[i] < diff){
      j++;
    }
    else{
      i++;
    }
  }
  cout << "no such pair" << endl;
  return false;
}

int main(){
  int n = 6;
  int diff = 77;
  int arr[] = {5, 20, 3, 2, 50, 80};
  find_pair_optimised(arr, n, diff);
  return 0;
}