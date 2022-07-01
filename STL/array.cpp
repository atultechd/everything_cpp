#include<iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  cout << "capacity -> " << v.capacity() << endl;

  v.push_back(10);
  cout << "capacity -> " << v.capacity() << endl;

  v.push_back(20);
  cout << "capacity -> " << v.capacity() << endl;

  v.push_back(30);
  cout << "capacity -> " << v.capacity() << endl;

  v.push_back(40);
  cout << "capacity -> " << v.capacity() << endl;

  cout << "size -> " << v.size() << endl;

  cout << "front -> " << v.front() << endl;

  cout << "back -> " << v.back() << endl;

  cout << "before pop" << endl;
  for(int i : v){
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();

  cout << "after pop" << endl;
  for(int i : v){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}

