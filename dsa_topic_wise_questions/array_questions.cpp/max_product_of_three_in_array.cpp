#include <bits/stdc++.h>
using namespace std;


int maximun_product_of_three(int arr[], int n){
  int final_product;
  for (int i = 0; i < n-1; ++i){
    for (int j = i; j < n; ++j){
      if (arr[i] > arr[j]){    
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  } 
  int min1 = arr[0];
  int min2 = arr[1];
  int max1 = arr[n-2];
  int max2 = arr[n-3];
  int min_product = min1 * min2;
  int max_product = max1 * max2;
  if (max_product >= min_product){
    final_product = arr[n-1] * max_product;
  }
  else{
    final_product = arr[n-1] * min_product;
  }

  return final_product;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << maximun_product_of_three(arr, n) << endl;
}