#include <iostream>
#include <deque>
using namespace std;

int main(){
  deque<int> d;

  // index 2
  d.push_back(10);
  // index 1
  d.push_front(20);
  // index 0
  d.push_front(30);  

  cout << "print first index element ->" << d.at(0) << endl;

  cout << "front-> " << d.front() << endl;
  cout << "back-> " << d.back() << endl;

  cout << "empty or not -> " << d.empty() << endl;

  cout << "before erase " << d.size() << endl;

  d.erase(d.begin(), d.begin()+1);

  cout << "after erase " << d.size() << endl;

  for(int i : d){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}