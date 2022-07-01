#include <iostream>
#include <map>
#include <queue>
#include <list>
using namespace std;

// template<typename t>
class graph{

  map<int, list<int>> l;

public:
  void add_edge(int a, int b){
    l[a].push_back(b);
    l[b].push_back(a);
  }

  void bfs(int src){
    map<int, int> visited;
    queue<int> q;

    q.push(src);
    visited[src] = true;

    while(!q.empty()){
      int node = q.front();
      q.pop();
      cout << node << " ";
      for (int adjacent: l[node]){
        if (!visited[adjacent]){
          q.push(adjacent);
          visited[adjacent] = true;
        }
      }
    }
    cout << endl;
  }
  
};

int main(){
  graph g;
  g.add_edge(0,1);
  g.add_edge(1,2);
  g.add_edge(2,3);
  g.add_edge(3,4);
  g.add_edge(4,5);

  g.bfs(0);
  return 0;

}