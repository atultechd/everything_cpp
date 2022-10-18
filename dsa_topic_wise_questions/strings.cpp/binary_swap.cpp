// HackerEarth Problem

#include <bits/stdc++.h>
using namespace std;

int swap_count(string &A, string &B){

  int res = 0;

  for(int i=0; i<A.size(); i++){

    if(A[i] != B[i]) res++;
  }

  if(res % 2 == 0) return res/2;

  return -1;
}

int main() {

  string A, B;

  cin >> A >> B;

  cout << swap_count(A, B) << endl;

  return 0;
}