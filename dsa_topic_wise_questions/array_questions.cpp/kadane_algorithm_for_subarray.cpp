#include <iostream>
using namespace std;

int max_sum_subarray(int a[], int n){
  int current_sum = 0;
  int max_sum = 0;
  for (int i = 0; i < n; ++i){
    current_sum += a[i];
    if (current_sum > max_sum){
      max_sum = current_sum;
    }
    if (current_sum < 0){
      current_sum = 0;
    }
  }
  if (max_sum == 0){
    for (int i = 0; i < n - 1; ++i){
      for (int j = i + 1; j < n; ++j){
        if (a[i] > a[j]){
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    return max_sum = a[n-1];
  }
  return max_sum;
}

int main(){
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << max_sum_subarray(arr , n) << endl;
  return 0;
}
