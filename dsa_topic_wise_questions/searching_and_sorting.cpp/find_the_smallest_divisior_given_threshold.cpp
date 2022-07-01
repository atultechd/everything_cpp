
// (same as koko eating bananas)

#include <bits/stdc++.h>
using namespace std;
int smallest_divisor(int nums[], int n, int threshold){
  int left = 1;
  int right = 0;
  for (int i = 0; i < n; ++i){
    right = max(right, nums[i]);
  }
  int res = right;
  while(left <= right){
    int mid = (left + right)/2;
    int t = 0;
    for (int i = 0; i < n; ++i){
      t += ceil((1.00)*nums[i]/mid);
    }
    if (threshold >= t){
      res = min(res, mid);
      right = mid -1;
    }
    else{
      left = mid + 1;
    }
  }
  return res;
}

int smallest_divisor_vector(vector<int> &nums, int threshold){
  int n = nums.size();
  int left = 1;
  int right = 0;
  for (int i = 0; i < n; ++i){
    right = max(right, nums[i]);
  }
  int res = right;
  while(left <= right){
    int mid = (left + right)/2;
    int t = 0;
    for (int i = 0; i < n; ++i){
      t += (nums[i]+mid-1)/mid;
    }
    if (threshold >= t){
      res = min(res, mid);
      right = mid -1;
    }
    else{
      left = mid + 1;
    }
  }
  return res;
}
int main(){
  int n = 5;
  vector<int> nums {44,22,33,11,1};
  int threshold = 5;
  cout << smallest_divisor_vector(nums, threshold) << endl;
  return 0;
}