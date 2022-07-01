#include <iostream>
using namespace std;

int k_max_sum_subarray(int a[], int n, int k){
  int current_sum = 0;
  int max_sum = 0;
  for (int i = 0; i < n*k; ++i){
    current_sum += a[i%n];
    if (current_sum > max_sum){
      max_sum = current_sum;
    }
    if (current_sum < 0){
      current_sum = 0;
    }
  }
  if (max_sum == 0){
    for (int i = 0; i < n*k - 1; ++i){
      for (int j = i + 1; j < n*k; ++j){
        if (a[i] > a[j]){
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    return max_sum = a[k*n-1];
  }
  return max_sum;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    cout << k_max_sum_subarray(arr , n, k) << endl;
  }
  return 0;
}
