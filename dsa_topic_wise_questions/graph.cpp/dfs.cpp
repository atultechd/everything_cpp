#include <bits/stdc++.h>
using namespace std;

const int n = 1e5+2;
bool visited[n];
vector<int> adjacent[n];

void dfs(int node){

  // preorder
  visited[node] = 1;
  cout << node << " ";

  // inorder
  vector<int>:: iterator it;

  for(it = adjacent[node].begin(); it != adjacent[node].end(); it++){
    if (visited[*it]);
    else{
      dfs(*it);
    }
  }

}


int main(){
  int a,b;
  cin >> a >> b;
  for (int i = 0; i <= a; ++i){
    visited[i] = false;
  }

  int x,y;
  for (int i = 0; i < b; ++i){
    cin >> x >> y;
    adjacent[x].push_back(y);
    adjacent[y].push_back(x);
  } 

   dfs(1);
   cout << endl;
  return 0;
}