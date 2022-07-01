#include <bits/stdc++.h>
using namespace std;

int max_partition(vector<int> &arr){
  int count = 1;  
  int n = arr.size();
  vector<int> max_of_left(n);
  vector<int> min_of_right(n);
  
  max_of_left[0] = arr[0];
  for (int i = 1; i < n; ++i){
    max_of_left[i] = max(max_of_left[i-1], arr[i]);
  }
  min_of_right[n-1] = arr[n-1];
  for (int i = n-2; i >= 0; --i){
    min_of_right[i] = min(min_of_right[i+1], arr[i]);
  }
  for (int i = 0; i < n-1; ++i){
    if (min_of_right[i+1] >= max_of_left[i]){
      count ++;
    }
  }
  return count;
}

int main(){
  vector<int> arr = {3, 2, 4, 5, 5};
  cout << max_partition(arr) << endl;
  return 0;
}