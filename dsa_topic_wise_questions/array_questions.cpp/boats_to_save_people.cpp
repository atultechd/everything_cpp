#include <bits/stdc++.h>
using namespace std;

int num_rescue_boats(int arr[], int n, int limit){
  sort(arr, arr+n);
  int count = 0;
  int i = 0;
  int j = n-1;
  while(i <= j){
    if (arr[i]+arr[j] <= limit){
      count ++;
      i++;
      j--;
    }
    else {
      count++;
      j--;
    }
  }
  return count;
}

int main(){
  int n = 4, limit = 5;
  int arr[] = {3,5,3,4};
  cout << num_rescue_boats(arr, n, limit) << endl;
  return 0;
}