#include <iostream>
using namespace std;

void sorting(int arr[] , int n){
  for (int i = 0; i < n-1; ++i){
    for (int j = i+1; j < n; ++j){
      if (arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int maximum(int a, int b){
  if (a > b){
    return a;
  }else {
    return b;
  }
}
int minimum(int a, int b){
  if (a > b){
    return b;
  }else {
    return a;
  }
}

int get_min_diff(int arr[] ,int n ,int k){
  sorting(arr, n);
  int ans = arr[n-1] - arr[0];
  int largest = arr[n-1] - k;
  int smallest = arr[0] + k;
  int min, max;
  for (int i = 1; i <= n-1; ++i){
     if (arr[i] >= k && arr[n - 1] >= k){
        max = maximum(largest , arr[i-1] + k);
        min = minimum(smallest, arr[i] - k);
        ans = minimum(ans , max - min);
 
     }   
  }
  return ans;
}
int main(){
  int n, k;
  cin >> n;
  cin >> k;

  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << get_min_diff(arr , n , k) << endl;
  return 0;
}
