// This code has some constraints
// the length of number should not be exceeded above 5 digits...


#include <bits/stdc++.h>
using namespace std;

string string_multiplicaton(string num1, string num2){
  int first = stoi(num1);
  int second = stoi(num2);
  int multiply = first * second;
  return to_string(multiply);
}

int main(){
  string num1 = "12232";
  string num2 = "12356";
  cout << string_multiplicaton(num1 , num2) << endl;
  return 0;
}