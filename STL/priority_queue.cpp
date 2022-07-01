#include <iostream>
#include <queue>
using namespace std;

int main(){
  // max heap
  priority_queue<int> max_h;

  // min heap
  priority_queue<int,vector<int> , greater<int> > min_h; 

  max_h.push(10);
  max_h.push(11);
  max_h.push(12);
  max_h.push(13);

  int m = max_h.size();
  for (int i = 0; i < m; ++i){
    cout << max_h.top() << " ";
    max_h.pop();
  }
  cout << endl;

  min_h.push(10);
  min_h.push(11);
  min_h.push(12);
  min_h.push(13);

  int n = min_h.size();
  for (int i = 0; i < n; ++i){
    cout << min_h.top() << " ";
    min_h.pop();
  }
  cout << endl;

  cout << "max heap empty or not -> " << max_h.empty() << endl;
  cout << "min heap empty or not -> " << min_h.empty() << endl;

  return 0;
}