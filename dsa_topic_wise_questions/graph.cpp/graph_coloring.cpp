#include <bits/stdc++.h>
using namespace std;

void solve(){
  int v,e;
  cin >> v >> e;
  vector<vector<int>> g(v);
  for (int i = 0; i < e; ++i){
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  int resultant[v];
  bool not_available[v];
  resultant[0] = 0;

  for (int i = 1; i < v; ++i){
    resultant[i] = -1;
  }
  for (int i = 0; i < v; ++i){
    not_available[i] = false;
  }

  int chromatic_no = 0;
  for (int i = 1; i < v; ++i){
    for(auto x: g[i]){
      if (resultant[x] != -1){
        not_available[resultant[x]] = true;
      }
    }

    int color;
    for (color = 0; color < v; color++){
      if (not_available[color] == false){
        break;
      }
    }

    resultant[i] = color;
    chromatic_no = max(chromatic_no, color+1);

    for(auto x: g[i]){
      if (resultant[x] != -1){
        not_available[resultant[x]] = false;
      }
    }
  }

  cout << chromatic_no << endl;
  for (int i = 0; i < v; ++i){
    cout << resultant[i] << " ";
  }
  cout << endl;
}

int main(){
  solve();
  return 0;
}