#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int arr[n];

  vector<int> p1;
  vector<int> p2;
  map<int, int> map;
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
    if (map[arr[i]] == 1){
      p2.push_back(arr[i]);
    }
    else{
      p1.push_back(arr[i]);
      map[arr[i]] ++;
    }
  }
  sort(p1.begin(), p1.end());
  for (int i = 0; i < p1.size(); ++i){
    cout << p1[i] << " ";
  }
  for (int i = 0; i < p2.size(); ++i){
    cout << p2[i] << " ";
  }
  cout << endl;
}

int main(){
  solve();
  return 0;
}