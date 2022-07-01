// xxxx.......incomplete code..........xxxx

#include <bits/stdc++.h>
using namespace std;

vector<int> find_smallest_range(vector<vector<int>>& nums){
  vector<pair<int,int>> a;
  for (int i = 0; i < nums.size(); ++i){
    for (int j: nums[i]){
      a.push_back({j,i});
    }
  }
  sort(a.begin(), a.end());
  int mini = 1e9;
  int diff = nums.size();
  int mp[diff];
  int total = 0;
  int j=0;
  vector<int>ans;
  memset(mp,0,sizeof(mp));
  for (int i = 0; i < a.size(); ++i){
    mp[a[i].second]++;
    if (mp[a[i].second] == 1){
      total ++;
    }
    if (total == diff){
      if (a[i].first-a[j].first+1 < mini){
        mini = a[i].first-a[j].first+1;
        ans = {a[j].first, a[i].first};
      }
    }
  }
}
int main(){
  int k = 3;
    int arr[][k] = {
        { 4, 7, 9, 12, 15 },
        { 0, 8, 10, 14, 20 },
        { 6, 12, 16, 30, 50 }
    };
 
    n = sizeof(arr)/sizeof(arr[0]);
 
    findSmallestRange(arr);
 
    return 0;
}