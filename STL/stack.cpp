#include<iostream>
#include <stack>
using namespace std;

int main(){
  stack<string> s;
  s.push("Atul");
  s.push("Dwivedi");
  cout << "first element is " << s.top() << endl;
  s.pop();
  cout << "after pop operation first element is " << s.top() << endl;
  cout << "size " << s.size() << endl;
  cout << "empty or not " << s.empty() << endl;
  return 0; 
}