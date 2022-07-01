#include <bits/stdc++.h>
using namespace std;

int main(){
  int ladders, snakes;
  cin >> ladders;
  map<int, int > lad;
  map<int, int> snak;
  for (int i = 0; i < ladders; ++i){
    int u, v;
    cin >> u >> v;
    lad[u] = v;
  }
  cin >> snakes;
  for (int i = 0; i < snakes; ++i){
    int u, v;
    cin >> u >> v;
    snak[u] = v;
  }
  int moves = 0;
  queue <int> q;
  q.push(1);
  bool found = false;
  vector <int> vis(101, 0);

  vis[1] = true;
  while(!q.empty() && !found){
    int sz = q.size();
    while(sz--){
      int top = q.front();
      q.pop();

      for (int die = 0; die < 6; ++die){
        if (top + die == 100){
          found = true;
        }
        if (top+die <=100 && lad[top+die] && !vis[lad[top+die]]){
          vis[lad[top+die]] = true;
          if (lad[top+die] == 100){
            found = true;
          }
          q.push(lad[top+die]);
        }
        else if(top+die <= 100 && snak[top+die] && !vis[snak[top+die]]){
          vis[snak[top+die]] = true;
          if (snak[top+die] == 100){
            found = true;
          }
          q.push(snak[top+die]);
        }
        else if(top+die <= 100 && !snak[top+die] && !vis[top+die] && !lad[top+die]){
          vis[top+die] = true;
          q.push(top+die);
        }
      }
    }
    moves ++;
  }
  if (found){
    cout << moves << endl;
  }
  else{
    cout << -1 << endl;
  }
  return 0;
}