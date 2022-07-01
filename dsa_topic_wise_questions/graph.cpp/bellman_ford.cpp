#include <bits/stdc++.h>
using namespace std;

struct Edge{
  int src,dest,weight;
};

struct Graph{
  int V,E;

  struct Edge *edge;
};

struct Graph *create_graph(int v, int e){
  struct Graph *graph = new Graph;

  graph->V = v;
  graph->E = e;
  graph->edge = new Edge[e];
  return graph;
}

void print_arr(int dist[], int n){
  cout <<"Vertex   distance from source" << endl;
  for (int i = 0; i < n; ++i){
    cout << i << "\t\t" << dist[i] << endl;
  }
}

void bellman_ford(struct Graph *graph, int src){
  int Ve = graph->V;
  int Eg = graph->E;
  int dist[Ve];

  for (int i = 0; i < Ve ; ++i){
    dist[i] = INT_MAX;
  }

  dist[src] = 0;

  for (int i = 0; i <= Ve-1; ++i){
    for (int j = 0; j < Eg; ++j){
      int u = graph->edge[j].src;
      int v = graph->edge[j].dest;
      int wt = graph->edge[j].weight;
      if (dist[u]!= INT_MAX && dist[u] + wt < dist[v]){
       dist[v] = dist[u] + wt; 
      } 
    }
  }
  for (int i = 0; i < Eg; ++i){
    int u = graph->edge[i].src;
    int v = graph->edge[i].dest;
    int wt = graph->edge[i].weight;
    if (dist[u] != INT_MAX && dist[u] + wt < dist[v]){
      cout << "Graph contains negative weight cycle";
      return;
    }
  }
  print_arr(dist, Ve);
  return;
}

int main(){
  int V = 5, E = 8;
  struct Graph *graph = create_graph(V,E);

  graph->edge[0].src = 0;
  graph->edge[0].dest = 1;
  graph->edge[0].weight = -1;

  graph->edge[1].src = 0;
  graph->edge[1].dest = 2;
  graph->edge[1].weight = 4;

  graph->edge[2].src = 1;
  graph->edge[2].dest = 2;
  graph->edge[2].weight = 3;

  graph->edge[3].src = 1;
  graph->edge[3].dest = 3;
  graph->edge[3].weight = 2;

  graph->edge[4].src = 1;
  graph->edge[4].dest = 4;
  graph->edge[4].weight = 2;

  graph->edge[5].src = 3;
  graph->edge[5].dest = 2;
  graph->edge[5].weight = 5;

  graph->edge[6].src = 3;
  graph->edge[6].dest = 1;
  graph->edge[6].weight = 1;

  graph->edge[7].src = 4;
  graph->edge[7].dest = 3;
  graph->edge[7].weight = -3;

  bellman_ford(graph, 0);
  return 0;

}