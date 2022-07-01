#include<iostream>
using namespace std;

void fun1(int n){
  int i = 0;
  if (n > 1){
    fun1(n-1);
  }
  for (int i = 0; i < n; ++i){
    cout << " * ";

  }
  cout << endl;
}

int main(){
  int n;
  cin >> n;
  fun1(n);
  return 0;
}