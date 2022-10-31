#include <bits/stdc++.h>

using namespace std;

int fx(vector<int> &nums){

  int n = nums.size() , count = n;

  sort(nums.begin(), nums.end());

  int i = 0, j = 1;

  while (i < n && j < n) {

    if (nums[i] <= nums[j]/2){

      count--, i++, j++;

    }

    else{

      j++;

    }   
  }

  return count;
}

int main() {

  int t;

  cin >> t;

  while(t--){

    int n;

    cin >> n;

    vector<int> nums(n,0);

    for(int i=0; i<n; i++){

      cin >> nums[i];
    }
    cout << fx(nums) << endl;
  }
  cout << "program finished" << endl;

  return 0;
}