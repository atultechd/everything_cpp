#include <bits/stdc++.h>
using namespace std;

string string_multiplicaton(string num1, string num2){
  if (num1.compare("0") || num2.compare("0")){
    return "0";
  }
  int l1 = num1.size();
  int l2 = num2.size();
  int res[l1+l2];
  int i = l2 -1 ;
  int pow_factor = 0;
  while(i >= 0){
    int ival = num2.at(i) - '0';
    i--;

    int j = l1 -1;
    int k = (l1+l2) - 1 - pow_factor;
    int carry = 0;

    while(j >= 0 || carry != 0){
      int jval = j >= 0 ? num1.at(j) - '0' : 0;
      j--;

      int prod = ival * jval + carry + res[k];
      res[k] = prod % 10;
      carry = prod / 10;
      k--;
    }
    pow_factor ++;
  }

  string str;
  bool flag = false;
  for (int val : res){
    if (val == 0 && flag == false){
      // leading zero
      continue;
    }
    else{
      flag = true;
      str += to_string(val);
    }
  } 
  return str;
}

int main(){
  string num1 = "10";
  string num2 = "1234";
  cout << string_multiplicaton(num1 , num2) << endl;
  return 0;
}