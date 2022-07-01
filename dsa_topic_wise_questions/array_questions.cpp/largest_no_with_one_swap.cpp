#include <bits/stdc++.h>
using namespace std;

int one_swap_allowed(int num){
  int max_digit = -1;
  int max_digit_index = -1;
  int l_index = -1;
  int r_index = -1;

  string num_in_str = to_string(num);

  for (int i = num_in_str.size()-1; i >= 0; --i){
    if (num_in_str[i] > max_digit){
      max_digit = num_in_str[i];
      max_digit_index = i;
      continue;
    }

    if (num_in_str[i] < max_digit){
      l_index = i;
      r_index = max_digit_index;
    }
  }

  if (l_index == -1){
    return num;
  }

  int temp = num_in_str[l_index];
  num_in_str[l_index] = num_in_str[r_index];
  num_in_str[r_index] = temp;

  return stoi(num_in_str);
}

int main(){
  int num;
  cin >> num;
  cout << one_swap_allowed(num) << endl;
  return 0;
}