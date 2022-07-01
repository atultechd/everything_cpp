#include <bits/stdc++.h>
using namespace std;

int sum_subsequence_width(int arr[], int n){
  sort(arr, arr+n);
  long ans = 0;
  long mod = 1000000007;
  long pow[n];
  pow[0] = 1;
  for (int i = 1; i < n; ++i){
    pow[i] = (pow[i-1]*2)% mod;
  }
  for (int i = 0; i < n; ++i){
    ans = (ans + arr[i] * (pow[i] - pow[n-i-1]))% mod;
  }

  return ans;
}

int main(){
  int n = 3;
  int arr[] = {2, 1, 3};
  cout << sum_subsequence_width(arr, n) << endl;
}