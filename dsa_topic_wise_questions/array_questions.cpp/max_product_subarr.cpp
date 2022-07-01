#include <iostream>
using namespace std;


// naive approach
int max_product(int arr[], int n){
  int result = arr[0];
  for (int i = 0; i < n; ++i){
    int prod = arr[i];
    for (int j = i+1; j < n; ++j){
      result = max(result, prod);
      prod *= arr[j];
    }
    result = max(result, prod);
  }
  return result;
}

// optimised approach
int max_subarr_prod(int arr[], int n){
  int max_ending_here = 1;
  int min_ending_here = 1;
  int flag = 0;
  int max_so_far = 0;
  for (int i = 0; i < n; ++i){
    if (arr[i] > 0){
      max_ending_here *= arr[i];
      min_ending_here = min(min_ending_here * arr[i], 1);
      flag = 1; 
    }else if (arr[i] == 0){
      max_ending_here = 1;
      min_ending_here = 1;
    }else{
      int temp = max_ending_here;
      max_ending_here = max(min_ending_here * arr[i] , 1);
      min_ending_here = temp * arr[i];
    }
    if (max_so_far < max_ending_here){
      max_so_far = max_ending_here;
    }
  }
  if (flag == 0 && max_so_far == 0){
    return 0;
  }
  return max_so_far;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << max_subarr_prod(arr, n) << endl;
  return 0;
}