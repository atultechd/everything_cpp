#include <iostream>
#include <stack>
using namespace std;

struct queue{
  stack<int>s1,s2;

  void enqueue(int input){
    while(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(input);
    while(!s2.empty()){
      s1.push(s2.top());
      s2.pop();
    }
  }

  int dequeue(){
    if (s1.empty()){
      cout << "queue is empty" << endl;
      exit(0);
    }
    int input = s1.top();
    s1.pop();
    return input;
  }
};

int main(){
  queue q;

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;
  return 0;
}