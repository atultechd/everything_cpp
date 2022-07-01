#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> arr{{1,2,3}, {3,2,1},{1,2,3}, {3,2,1}};
  cout << arr.size() << endl;
  cout << arr[0].size() << endl;
  cout << arr[1].size() << endl;
  cout << arr[2].size() << endl;
  return 0;
}

int maxProduct(vector<int>& nums) {
  auto m1 = 0, m2 = 0;
  for (auto n: nums) {
    if (n > m1)
      m2 = exchange(m1, n);
    else
      m2 = max(m2, n);
  }
  return (m1 - 1) * (m2 - 1);
}

// 1545
m1= 0,1,5
m2 =0,1,5