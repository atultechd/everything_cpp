#include <bits/stdc++.h>
using namespace std;

bool long_press(string name, string typed){
  int i = 0;
  int j = 0;
  int n = name.length();
  int t = typed.length();

  if (n > t){
    return false;
  }
  while(i < n && j < t){
    if (name.at(i) == typed.at(j)){
      i++, j++;
    }
    else if (i > 0 && name.at(i-1) == typed.at(j)){
      j++; 
    }
    else{
      return false;
    }
  }
  while(j < t){
    if (name.at(i-1) != typed.at(j)){
      return false;
    }
    j++;
  }
  return (i < n) ? false : true;
}

int main(){
  string name = "atul";
  string typed = "aaattuulll";
  cout << long_press(name, typed) << endl;
  return 0;
}