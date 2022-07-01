#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int u, int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void bfs_shortest_path(vector<int> adj[], int vertex, int src){
  int dist[vertex];
  for (int i = 0; i < vertex; ++i){
    dist[i] = INT_MAX;
  }
  queue <int> q;
  dist[src] = 0;
  q.push(src);

  while(q.empty()==false){
    int node = q.front();
    q.pop();

    for (auto it : adj[node]){
      if (dist[node]+1 < dist[it]){
        dist[it] = dist[node]+1;
        q.push(it);
      }
    }
  }
  for (int i = 0; i < vertex; ++i){
    cout << dist[i] << " ";
  }
}

int main(){
  int v = 5;
  vector<int> adj[v];
  add_edge(adj, 0, 1);
  add_edge(adj, 0, 4);
  add_edge(adj, 1, 2);
  add_edge(adj, 1, 3);
  add_edge(adj, 1, 4);
  add_edge(adj, 2, 3);
  add_edge(adj, 3, 4);

  bfs_shortest_path(adj, v, 0);
}