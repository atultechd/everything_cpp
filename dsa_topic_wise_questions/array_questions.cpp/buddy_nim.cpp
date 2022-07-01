#include <bits/stdc++.h>
using namespace std;

void buddy_nim(int arr1[], int arr2[], int m, int n){
  sort(arr1, arr1+m);
  sort(arr2, arr2+n);
  
  int i = 0;
  while(arr1[i] == 0){
    i++;
  }
  int j = 0;
  while(arr2[j] == 0){
    j++;
  }

  while(i < m && j < n){
    if (arr1[i] != arr2[j]){
      cout << "Alice" << endl;
      return;
    }
    i++;
    j++;
  }

  if (i == m && j == n){
    cout << "Bob" << endl;
  }
  else{
    cout << "Alice" << endl;
  }

}

int main(){
  int arr1[] = {24, 6, 10, 56, 9, 1};
  int arr2[] = {0, 6, 24, 1, 9, 56, 10};
  int m = sizeof(arr1)/sizeof(arr1[0]);
  int n = sizeof(arr2)/sizeof(arr2[0]);
  buddy_nim(arr1, arr2, m, n);
  return 0;
}