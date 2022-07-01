#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, source;
  cin >> n >> m;
  vector<pair<int, int>> g[n+1];

  int a, b, weight;
  cout << "enter linked nodes and weight" << endl;
  for (int i = 0; i < m; ++i){
    cin >> a >> b >> weight;
    g[a].push_back(make_pair(b, weight));
    g[b].push_back(make_pair(a, weight));
  }
  cout << "enter source" << endl;
  cin >> source;

  // Dijkstra's Algorithm

  priority_queue<pair<int, int>, vector<pair<int, int>>,
   greater<pair<int, int>>> pq;

  vector<int>dist_to(n+1, INT_MAX);

  dist_to[source] = 0;
  pq.push(make_pair(0, source));

  while(!pq.empty()){
    int dist = pq.top().first;
    int prev = pq.top().second;
    pq.pop();

    vector<pair<int, int>> :: iterator it;
    for(it = g[prev].begin(); it != g[prev].end(); it++){
      int next = it->first;
      int next_dist = it->second;

      if (dist_to[next] > dist_to[prev] + next_dist){
        dist_to[next] = dist_to[prev] + next_dist;
        pq.push(make_pair(dist_to[next],next));
      }
    }
  }

  cout << "The distance from source" << source << "are :" << endl;
  for (int i = 1; i <= n; ++i){
    cout << dist_to[i] << " ";
  }
  cout << endl;

  return 0;
}