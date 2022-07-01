#include <iostream>
#include <set>
using namespace std;

int main(){
  set<int> s;

  s.insert(11);
  s.insert(13);
  s.insert(11);
  s.insert(10);
  s.insert(12);
  s.insert(10);
  s.insert(13);

  for (int i : s){
    cout << i << " ";
  }
  cout << endl;

  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for (int i : s){
    cout << i << " ";
  }
  cout << endl;

  cout << s.count(10) << endl;

  set<int>::iterator itr = s.find(10);

  for (auto it = itr; it != s.end(); ++it){
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}