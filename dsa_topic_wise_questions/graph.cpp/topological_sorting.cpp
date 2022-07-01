#include <bits/stdc++.h>
using namespace std;

int main(){
  int vertex, edge;
  cin >> vertex >> edge;
  int count = 0;

  vector<vector<int>> adj(vertex);
  vector<int> indeg(vertex, 0);

  for (int i = 0; i < edge; ++i){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    indeg[v] ++;
  }

  queue<int> pq;

  for (int i = 0; i < vertex; ++i){
    if (indeg[i] == 0){
      pq.push(i);
    }
  }
  while(!pq.empty()){
    count ++;
    int x = pq.front();
    pq.pop();
    cout << x << " ";

    for(auto it : adj[x]){
      indeg[it] --;
      if (indeg[it] == 0){
        pq.push(it);
      }
    }
  }
  cout << endl;
  return 0;
}