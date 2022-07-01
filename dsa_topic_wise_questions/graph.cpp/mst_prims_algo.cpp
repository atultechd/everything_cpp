#include <bits/stdc++.h>
using namespace std;

int main(){
  int vertex,edge;
  cin >> vertex >> edge;
  vector <pair<int, int>> adj[vertex];

  int a,b,weight;
  for (int i = 0; i < edge; ++i){
    cin >> a >> b >> weight;
    adj[a].push_back(make_pair(b,weight));
    adj[b].push_back(make_pair(a,weight));
  }

  int parent[vertex];
  int key[vertex];
  bool mst_set[vertex];

  for (int i = 0; i < vertex; ++i){
    key[i] = INT_MAX;
    mst_set[i] = false;
  }

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  key[0] = 0;
  parent[0] = -1;
  pq.push({0,0});

  while(!pq.empty()){
    int u = pq.top().second;
    pq.pop();

    mst_set[u] = true;

    for(auto it : adj[u]){
      int v = it.first;
      int weight_new = it.second;
      if (mst_set[v] == false && weight_new < key[v]){
        parent[v] = u;
        key[v] = weight_new;
        pq.push({key[v],v});
      }
    }
  }

  for (int i = 1; i < vertex; ++i){
    cout << parent[i] << " - " << i << "\n";
  }
  cout << endl;
  return 0;
}