#include <bits/stdc++.h>
using namespace std;

#define vertex 5

int min_key(int key[], bool mst_set[]){
  int min = INT_MAX;
  int min_index;
  for (int i = 0; i < vertex; ++i){
    if (mst_set[i] == false && key[i] < min){
      min = key[i];
      min_index = i;
    }
  }
  return min_index;
}

void print_mst(int parent[], int graph[vertex][vertex]){
  cout << "Edge\tWeight\n";

  for (int i = 1; i < vertex; ++i){
    cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << "\n";
  }
}

void prim_mst(int graph[vertex][vertex]){
  int parent[vertex];
  int key [vertex];
  bool mst_set[vertex];

  for (int i = 0; i < vertex; ++i){
    key[i] = INT_MAX;
    mst_set[i] = false;
  }
  key[0] = 0;
  parent[0] = -1;

  for (int count = 0; count < vertex-1; ++count){
    int u = min_key(key, mst_set);
    mst_set[u] = true;

    for (int i = 0; i < vertex; ++i){
      if (graph[u][i] && mst_set[i] == false && graph[u][i] < key[i]){
        parent[i] = u;
        key[i] = graph[u][i];
      }
    }
  }
  print_mst(parent, graph);

}

int main(){
  int graph[vertex][vertex] = {{0,2,0,6,0},
                               {2,0,3,8,5},
                               {0,3,0,0,7},
                               {6,8,0,0,9},
                               {0,5,7,9,0}};
                                   
  prim_mst(graph);
  return 0;
}


