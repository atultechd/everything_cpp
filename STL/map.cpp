#include <iostream>
#include <map>
using namespace std;

int main(){
  map<int, string> m;
  m[1] = "Atul";
  m[2] = "Dwivedi";
  m[3] = "Manu";

  m.insert({5, "beeera"});
  cout << "before erase" << endl;
  for (auto i : m){
    cout << i.first << " " << i.second << endl;
  }
  cout << "finding 5 -> " << m.count(5) << endl;

  m.erase(5);
  
  cout << "after erase" << endl;
  for (auto i : m){
    cout << i.first << " " << i.second << endl;
  }
  cout << "finding 5 -> " << m.count(5) << endl;
  return 0;
}