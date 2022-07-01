#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> v;
  v.push_back(12);
  v.push_back(10);
  v.push_back(14);
  v.push_back(11);
  v.push_back(13);

  cout << binary_search(v.begin(), v.end(), 12) << endl;
  cout << "before any operation" << endl;
  for(int i : v){
    cout << i << " ";
  }
  cout << endl;

  rotate(v.begin(), v.begin()+1, v.end());
  cout << "after rotate operation" << endl;
  for(int i : v){
    cout << i << " ";
  }
  cout << endl;


  sort(v.begin(), v.end());
  cout << "after sort operation" << endl;
  for(int i : v){
    cout << i << " ";
  }
  cout << endl;

// ..............................................................

  string abcd = "abcd";
  cout << "after reverse operation in string" << endl;
  reverse(abcd.begin(), abcd.end());
  cout << abcd << endl;
  return 0;
}