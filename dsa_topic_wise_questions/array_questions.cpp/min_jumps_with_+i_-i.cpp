#include <iostream>
using namespace std;

int min_jumps(int n){
  int jumps = 1;
  int sum = 0;
  while(sum < n){
    sum += jumps;
    jumps ++;
  }
  if ((sum - n) % 2 == 0){
    return jumps -1;
  }
  else if ((sum + jumps - n) % 2 == 0){
    return jumps;
  }
  else{
    return jumps + 1;
  }
}

int main(){
  int n;
  cin >> n;
  cout << min_jumps(n) << endl;
  return 0;
}