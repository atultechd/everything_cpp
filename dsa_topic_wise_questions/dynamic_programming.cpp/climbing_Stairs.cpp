#include <iostream>
using namespace std;

int climbing_stairs(int n){
  int one = 1, two = 1;
  for (int i = 1; i < n; ++i){
    int temp = one;
    one = one + two;
    two = temp;
  }
  return one;
}

int main(){
  cout << climbing_stairs(5) << endl;
}