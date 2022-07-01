#include <bits/stdc++.h>
using namespace std;

int min_banana(int pile[], int n, int h){
  int left = 1;
  int right = 0;
  for (int i = 0; i < n; ++i){
    right = max(right, pile[i]);
  }
  int res = right;
  while(left <= right){
    int hour = 0;
    int k = (left + right)/2;
    for (int i = 0; i < n; ++i){
      hour += ceil((1.00)*pile[i]/k);
    }
    if (hour <= h){
      res = min(res, k);
      right = k-1;
    }
    else{
      left = k+1;
    }
  }
  
  return res;
}

int main(){
  int n = 4;
  int pile[] = {3,6,7,11};
  int h = 8;
  cout << min_banana(pile, n, h) << endl;
  return 0;
}