#include <bits/stdc++.h>
using namespace std;


vector<int> solve(int n){
  if (n%2 == 0){
    if (n%4 == 0){
      return {n/2, n/4, n/4};
    }
    else{
      return {n/2 -1, n/2 -1, 2};
    }
  }
  else{
    return {n/2, n/2, 1};
  }

}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> ans = solve(n-k+3);
    for (int i = 0; i < k; ++i){
      cout << (i < 3 ? ans[i] : 1) << " ";
    }
    cout << endl;
  }
  return 0;
}