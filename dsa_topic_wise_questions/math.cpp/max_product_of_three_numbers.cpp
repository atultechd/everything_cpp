#include <bits/stdc++.h>

using namespace std;

int max_product(vector<int>& nums) {
//  1. Data sturcture banana hai nums ko store karne k liye 
//  2. Taaki negative largest number remove kar sake odd negative wale case me

//  3. Then sabhi negative ko positive me change kardo
//  4. Aur sabhi numbers me max 3 num choose karke multiply karlo, easy-peasy :)

  unordered_map<int,int> u_map;

  for(int i=0; i<nums.size(); i++){

    u_map[i] = nums[i];
  }

  int count = 0;

  for(int i=0; i<nums.size(); i++){

    if(nums[i] < 0) count++;
  }

  if(count % 2 != 0){

    sort(nums.begin(), nums.end(), greater<int>());

    int a = 0;

    for(int i=0; i<nums.size(); i++){

      a = nums[i];

      if(a < 0) break;
    }

    for(auto it : u_map){

      if(it.second == a) u_map.erase(it.first);
    }
  }

  vector<int> res;

  for(auto it: u_map){

    if(it.second < 0) it.second = -it.second;

    res.push_back(it.second);
  }
  sort(res.begin(), res.end(), greater<int>());

  return res[0] * res[1] * res[2];


}

int main() {

  vector<int> nums = {11,2,12,-3,-24};

  cout << max_product(nums) << endl;

  return 0;
}