// incomplete sorting problem

#include <bits/stdc++.h>
using namespace std;


void sort012(int a[], int n){
  int low = 0, high = n-1, mid = 0;

  while(mid <= high){

    if(a[mid]==0)
      swap(a[mid++], a[low++]);

    else if(a[mid]==1)
      mid++;

    else
      swap(a[mid], a[high--]);
  }

  for (int i = 0; i < n; ++i){
    cout << a[i] << " ";
  }
  cout << endl;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  sort012(arr, n);
  return 0;
}