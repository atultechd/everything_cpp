#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int u, int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void print_graph(vector<int> adj[], int v){
  for (int i = 0; i < v; ++i){
    cout << "Adjacency list of vertex" << " " << i << endl;
    cout << "head";
    for (auto x : adj[i]){
      cout << "->" << x;
    }
    cout << endl;
  }
  cout << endl;
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

  print_graph(adj, v);
  return 0;
}