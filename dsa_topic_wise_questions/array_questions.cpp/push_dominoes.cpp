#include <bits/stdc++.h>
using namespace std;

void slove_config(char arr[], int i, int j){
  if (arr[i] == 'L' && arr[j] == 'L'){
    for (int k = 0; k < j; ++k){
      arr[k] = 'L';
    }
  }else if (arr[i] == 'R' && arr[j] == 'R'){
    for (int k = 0; k < j; ++k){
      arr[k] = 'R';
    }
  }else if (arr[i] == 'L' && arr[j] == 'R'){
    // nothing to do
  }else{
    int diff = j - i;
    int mid = (i + j )/ 2;
    if (diff % 2 == 0){
      for (int k = i+1; k < mid; ++k){
        arr[k] = 'R';
      }
      for (int k = mid+1; k < j; ++k){
        arr[k] = 'L';
      }
    }else{
      for (int k = i+1; k <= mid; ++k){
        arr[k] = 'R';
      }
      for (int k = mid+1; k < j; ++k){
        arr[k] = 'L';
      }
    }
  }
}

string push_dominoes(string dominoes){
  int n = dominoes.length();
  char arr[n+2];
  // m is size of char array
  int m = n+2;
  arr[0] = 'L';
  arr[n+1] = 'R';

  for (int i = 1; i < m-1; ++i){
    arr[i] = dominoes.at(i-1);
  }
  int j = 0;
  int k = 1;
  while(k < m){
    while(arr[k] == '.'){
      k++;
    }
    slove_config(arr, j, k);
    j = k;
    k++;
  }

  string result;
  for (int i = 1; i < m - 1; ++i){
    result.push_back(arr[i]);
  }

  return result;
}

int main(){
  string dominoes = ".L.R...LR..L..";
  cout << push_dominoes(dominoes) << endl;
  return 0;
}