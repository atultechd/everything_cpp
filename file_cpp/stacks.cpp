#include <iostream>
using namespace std;

#define n 100

class stack{

  int* arr;
  int top;

  public:
  stack(){
    arr = new int[n];
    top = -1;
  }

  void push(int x){
    if(top == n-1){
      cout << "stack overflow" << endl;
      return;
    }
    top++;
    arr[top] = x;
  }

  void pop(){
    if (top == -1){
      cout << "stack is empty" <<endl;
    }
    top --;
  }

  int top_ele(){
    if (top == -1){
      cout << "no element in stack" << endl;
    }
    return arr[top];
  }

  bool is_empty(){
    return top == -1;
  }
  
};

int main(){
  stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  cout << st.top_ele() << endl;
  st.pop();
  cout << st.top_ele() << endl;
  st.pop();
  cout << st.top_ele() << endl;
  st.pop();
  cout << st.top_ele() << endl;
  cout << st.is_empty() << endl;
  return 0;
}
