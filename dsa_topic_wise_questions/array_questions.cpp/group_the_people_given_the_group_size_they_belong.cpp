// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;


void fx(vector<int>& gz) {

  vector<vector<int>> ans, groups(gz.size() + 1);

  for (auto i = 0; i < gz.size(); ++i) {

    groups[gz[i]].push_back(i);

    if (groups[gz[i]].size() == gz[i]) {

      ans.push_back({});
      
      swap(ans.back(), groups[gz[i]]);
    }
  }

  for(int i=0; i< ans.size(); i++){

      for(int j=0; j<ans[i].size(); j++){

          cout << ans[i][j] << " ";
      }
      cout << endl;
  }
}


int main() {

    vector<int> gz = {3,3,3,3,3,1,3};

    fx(gz);
    
    return 0;
}