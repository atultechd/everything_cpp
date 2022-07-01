#include <bits/stdc++.h>
using namespace std;

void minimum_coins(int v){
  int denomination[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
  int sz = 9;
  vector <int> ans;
  for (int i = sz-1; i >= 0; i--){
    while(v >= denomination[i]){
      v -= denomination[i];
      ans.push_back(denomination[i]);
    }
  }
  for (int i = 0; i < ans.size(); ++i){
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main(){
  int input;
  cin >> input;
  minimum_coins(input);
  return 0;
}