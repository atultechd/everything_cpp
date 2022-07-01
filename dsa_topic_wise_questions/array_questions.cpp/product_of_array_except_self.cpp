#include <bits/stdc++.h>
using namespace std;

void product_except_self(int arr[], int n){
  int right[n];
  int product = 1;
  for (int i = n-1; i >= 0; --i){
    product *= arr[i];
    right[i] = product;
  }
  product = 1;
  int res[n];
  for (int i = 0; i < n-1; ++i){
    int left_product = product;
    int right_product = right[i+1];
    res[i] = left_product * right_product;
    product *= arr[i];
  }
  res[n-1] = product;
  for (int i = 0; i < n; ++i){
    cout << res[i] << " ";
  }
  cout << endl;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  product_except_self(arr, n);
  return 0;
}


