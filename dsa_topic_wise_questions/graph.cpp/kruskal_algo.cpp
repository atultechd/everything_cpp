#include <bits/stdc++.h>
using namespace std;

class Edge{
public:
  int src, destination, weight;
};

class Graph{
public:
  int vertex, edge;
  Edge *e;
};

class subset{
public:
  int parent;
  int rank;
};

Graph *create_graph(int vertex, int edge){
  Graph *graph = new Graph;
  graph->vertex = vertex;
  graph->edge = edge;

  graph->e = new Edge[edge];
  return graph;
}

int find(subset subsets[], int i){
  if (subsets[i].parent != i){
    subsets[i].parent = find(subsets, subsets[i].parent);
  }
  return subsets[i].parent;
}

void Union(subset subsets[], int x, int y){
  int xroot = find(subsets, x);
  int yroot = find(subsets, y);

  if (subsets[xroot].rank < subsets[yroot].rank){
    subsets[xroot].parent = yroot;
  }else if (subsets[xroot].rank > subsets[yroot].rank){
    subsets[yroot].parent = xroot;
  }else{
    subsets[yroot].parent = xroot;
    subsets[xroot].rank++;
  }
}

int my_comp(const void *a, const void *b){
  Edge *a1 = (Edge*)a;
  Edge *b1 = (Edge*)b;
  return a1->weight > b1->weight;
}

void kruskal_mst(Graph *graph){
  int v = graph->vertex;
  Edge result[v];

  qsort(graph->e , graph->edge, sizeof(graph->e[0]), my_comp);

  subset *subsets = new subset[(v *sizeof(subset))];

  for (int i = 0; i < v; ++i){
    subsets[i].parent = i;
    subsets[i].rank = i;
  }

  int j=0, k=0;
  while(j < v-1 && k < graph->edge){
    Edge next_edge = graph->e[k++];

    int x = find(subsets, next_edge.src);
    int y = find(subsets, next_edge.destination);

    if (x != y){
      result[j++] = next_edge;
      Union(subsets, x, y);
    }
  }
  cout << "Following are the edges in constructed MST" << endl;
  int minimum_cost = 0;
  for (int i = 0; i < j; ++i){
    cout << result[i].src << " -- " << result[i].destination << " == " << result[i].weight 
    << endl;
    minimum_cost = minimum_cost + result[i].weight;
  }
  cout << "Minimum Cost Spanning Tree " << minimum_cost << endl;
}

int main(){
  int vertex = 4;
  int edge = 5;
  Graph *graph = create_graph(vertex, edge);

  // add edge 0 - 1
  graph->e[0].src = 0;
  graph->e[0].destination = 1;
  graph->e[0].weight = 10;

  // add edge 0 - 2
  graph->e[1].src = 0;
  graph->e[1].destination = 2;
  graph->e[1].weight = 6;

  // add edge 0 - 3
  graph->e[2].src = 0;
  graph->e[2].destination = 3;
  graph->e[2].weight = 5;

  // add edge 1 - 3
  graph->e[3].src = 1;
  graph->e[3].destination = 3;
  graph->e[3].weight = 15;

  // add edge 2 - 3
  graph->e[4].src = 2;
  graph->e[4].destination = 3;
  graph->e[4].weight = 4;

  kruskal_mst(graph);

  return 0;
}

