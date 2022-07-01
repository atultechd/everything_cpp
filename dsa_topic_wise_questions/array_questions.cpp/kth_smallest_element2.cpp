#include <bits/stdc++.h>
using namespace std;

int kth_smallest(int arr[], int k){
  priority_queue<int> max_h;
  int m = max_h.size();
  for (int i = 0; i < k; ++i){
    max_h.push(arr[i]);
  }
  for (int i = 0; i < m; ++i){
    if (max_h.top() > arr[i]){
      max_h.pop();
      max_h.push(arr[i]);
    }
  }
  return max_h.top();
}

int kth_largest(int arr[], int k){
  priority_queue<int, vector<int>, greater<int>> min_h;
  int m = min_h.size();
  for (int i = 0; i < k; ++i){
    min_h.push(arr[i]);
  }
  for (int i = 0; i < m; ++i){
    if (min_h.top() < arr[i]){
      min_h.pop();
      min_h.push(arr[i]);
    }
  }
  return min_h.top();
}

int main(){
  int n = 6;
  int arr[] = {7,10,4,3,20,15};
  int k = 6;
  cout << kth_smallest(arr, k) << endl;
  cout << kth_largest(arr, k) << endl;
  return 0;
}