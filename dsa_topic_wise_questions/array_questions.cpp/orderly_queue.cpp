#include<bits/stdc++.h>
using namespace std;

string orderly_queue(string s, int k){
  if (k==1){
    string ans = s;
    for (int i = 0; i < s.length(); ++i){
      ans = min(ans, s.substr(i) + s.substr(0, i));
    }
    return ans;
  }
  sort(s.begin(), s.end());
  return s;
}

int main(){
  int k = 1;
  string s = "hello";
  cout << orderly_queue(s, k) << endl;
  return 0;
}