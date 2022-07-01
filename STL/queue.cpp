#include <iostream>
#include <queue>
using namespace  std;

  
int main(){
  queue<string> q;
  q.push("Atul");
  q.push("Dwivedi");

  cout << "first element will be " << q.front() << endl;
  cout << "second element will be" << q.back() << endl;
  q.pop();
  cout << "first element will be " << q.front() << endl;
  cout << "size after pop " << q.size() << endl;
  return 0;
}