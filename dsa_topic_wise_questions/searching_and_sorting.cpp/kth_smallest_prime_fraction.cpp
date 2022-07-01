#include <bits/stdc++.h>
using namespace std;

int count_fx(int arr[], int n, double target){
  int count = 0;
  int i = 0;
  int num = arr[0], deno = arr[n-1];
  for (int j = 0; j < n; ++j){
    while(arr[i] <= arr[j]*target){
      i++;
    }
    count += i;
    if (i>0 && arr[i-1]*deno > num*arr[j]){
      num = arr[i-1];
      deno = arr[j];
    }
  }
}

int kth_smallest_prime_fraction(int arr[], int n, int k){
  double low = arr[0]/(double)arr[n-1];
  double high = arr[n-1];

  while(low < high){
    double mid = (low + high)/2;
    int count[] = count_fx(arr, n, mid);

    if (k < count[0]){
      high = mid;
    }
    else if (k > count[0]){
      low = mid;
    }
    else{
      return {count[1], count[2]};
    }
  }
  return NULL;
}

int main(){
  int n = 4;
  int arr[] = {1,2,3,5};
  int k = 3;
  cout << kth_smallest_prime_fraction(arr, n, k) << endl;
  return 0;
}