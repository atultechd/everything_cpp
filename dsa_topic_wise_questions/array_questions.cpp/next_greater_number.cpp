#include <bits/stdc++.h>
using namespace std;

vector<int> next_greater(vector<int> arr, int n){
  if (n == 1){
    return arr;
  }
  int i = 0;
  for (i = n-1; i > 0; --i){
    if (arr[i] > arr[i-1]){
      break;
    }
  }
  if (i != 0){
    for (int j = n-1; j >= i; --j){
      if (arr[i-1] < arr[j]){
        swap(arr[i-1], arr[j]);
        break;
      }
    }
  }
  reverse(arr.begin()+i, arr.end());  

  return arr;
}

int main(){
  int n = 4;
  vector<int> v{7,2,9,4};
  vector<int> res;
  res = next_greater(v , n);
  for (int i = 0; i < res.size(); ++i){
    cout << res[i]; 
  }
  cout << endl;
  return 0;
}