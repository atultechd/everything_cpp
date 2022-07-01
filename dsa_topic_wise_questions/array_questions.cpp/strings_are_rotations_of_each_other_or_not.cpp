#include <bits/stdc++.h>
using namespace std;

void rotations_or_not(string s1, string s2){
  if (s1.length() != s2.length()){
    cout << "not found" << endl;
  }
  else{
    string temp = s1 + s2;
    if (temp.find(s2) != string::npos){
      cout << "found" << endl;
    }
  }
}

int main(){
  string str1 = "mypencil";
  string str2 = "pencilmry";
  rotations_or_not(str1, str2);
  return 0;
}
