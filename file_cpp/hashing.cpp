#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
  unordered_set<int>s;
  s.insert(10);
  s.insert(20);
  s.insert(30);

  if (s.find(10) == s.end()){
    cout << "not found" << endl;
  }else{
    cout << "found" << endl;
  }

  for(auto it = s.begin(); it != s.end(); it++){
    cout << (*it) << " ";
  }
  cout << endl;
  
  // s.clear();
  // cout << s.size();


  if (s.count(9) == 0){
    cout << "hello"<< endl;;
  }else{
    cout << "bye"<< endl;;
  }


  s.erase(20);


  for(auto it = s.begin(); it != s.end(); it++){
    cout << (*it) << " ";
  }
  cout << endl;
  return 0;
}

// In this program we learned about the following functions:-

// insert()
// find()
// begin()
// end()
// clear()
// erase()
// count()