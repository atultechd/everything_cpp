#include <bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adjacent, vector<bool> &visited ,int parent){
  visited[src] = true;
  for(auto i: adjacent[src]){
    if (i != parent){
      if (visited[i]){
        return true;
      }
      if (!visited[i] && iscycle(i, adjacent, visited, src)){
        return true;
      }
    }
  }
  return false;
}


int main(){
  int vertex, edge;
  cin >> vertex >> edge;
  vector<vector<int>> adjacent(vertex);
  for (int i = 0; i < edge; ++i){
    int u,v;
    cin >> u >> v;
    adjacent[u].push_back(v);
    adjacent[v].push_back(u);
  }

  bool cycle = false;
  vector<bool> visited(vertex , false);
  for (int i = 0; i < vertex; ++i){
    if (!visited[i] && iscycle(i , adjacent, visited, -1)){
      cycle = true;
    }
  }
  if (cycle){
    cout << "cycle is present";
  }
  else{
    cout << "cycle is not present";
  }
  return 0;
}
