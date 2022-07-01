#include <bits/stdc++.h>
using namespace std;

int main(){
  long long left, right;
  cin >> left >> right;
  if ((right - left) % 2 != 0){
    cout << "Yes" << endl;
    for (int i = left; i < right; i+=2){
      cout << i << " " << i + 1 << endl;
    }
  }
  else{
    cout << "No" << endl;
  }
  return 0;

}