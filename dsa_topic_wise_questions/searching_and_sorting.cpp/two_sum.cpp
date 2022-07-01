#include <bits/stdc++.h>
using namespace std;

void twoSum(int nums[], int n, int target){
  unordered_set<int> s;
  for (int i = 0; i < n; ++i){
    int temp = target- nums[i];
    if (s.find(temp) != s.end()){
      cout << "["<< temp << ", "<< nums[i] << "]" << endl;
    }
    s.insert(nums[i]);
  }
}

int main(){
  int target = 14;
  int n = 5;
  int nums[] = {2,6,5,8,11};
  twoSum(nums, n, target);
  return 0;
}