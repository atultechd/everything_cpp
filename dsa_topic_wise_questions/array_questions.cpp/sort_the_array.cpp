#include <bits/stdc++.h>
using namespace std;

void sort_arr(int arr[], int n){
  int st = -1;
  int en = n;
  bool flag = true;
  for (int i = 1; i < n; ++i){
    if (flag){
      if (arr[i] < arr[i-1]){
        flag = false;
        st = i-1;
      }
    }
    else{
      if (arr[i] > arr[i-1]){
        en = i;
        break;
      }
    }
  }

  if (st != -1){
    reverse(arr+st, arr+en);
    for (int i = 1; i < n; ++i){
      if (arr[i] < arr[i-1]){
        flag = false;
        break;
      }
      else{
        flag = true;
      }
    }
  }

  if (flag){
    cout << "Yes" << endl;
    if (st == -1){
      cout << "1 1" << endl;
    }
    else{
      cout << st+1 << " " << en << endl;
    }
  }
  else{
    cout << "No" << endl;
  }
  
}

int main(){
  int n = 4;
  int arr[] = {3,1,2,4};
  sort_arr(arr, n);
  return 0;
}