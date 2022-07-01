#include <bits/stdc++.h>
using namespace std;

bool ok(int mid, vector<int> &nums, int m){
  int total = 0;
  int sub_arr = 0;
  int n = nums.size();
  for (int i = 0; i < n; ++i){
    if (nums[i]>mid){
      return false;
    }
    if (total+nums[i]<=mid){
      total += nums[i];
    }
    else{
      sub_arr++;
      total = nums[i];
    }
  }
  sub_arr++;
  return(sub_arr <= m);
}

int split_Arr(vector<int> &nums, int m){
  int left =0;
  int right = 1e9+1;
  while(left<right){
    int mid = (left+right)/2;
    if (ok(mid,nums,m)){
      right = mid;
    }
    else{
      left = mid + 1;
    }
  }
  return left;
}

int main(){
  int m = 2;
  vector<int> nums{7,2,5,10,8};
  cout << split_Arr(nums, m) << endl;
  return 0;
}