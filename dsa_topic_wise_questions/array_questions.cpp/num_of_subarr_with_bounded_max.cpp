#include <bits/stdc++.h>
using namespace std;

int bounded_max(int arr[], int n, int left , int right){
  int si = 0;
  int ei = 0;

  int ans = 0;
  int prev = 0;
  while(ei < n){
    if (left <= arr[ei] && arr[ei] <= right ){
      prev = ei - si + 1;
      ans += prev;
    }
    else if (arr[ei] < left){
      ans += prev;
    }
    else{
      si = ei +1;
      prev = 0;
    }
    ei++ ;
  }
  return ans;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << bounded_max(arr, n, 2 , 4) << endl;
  return 0;
}
