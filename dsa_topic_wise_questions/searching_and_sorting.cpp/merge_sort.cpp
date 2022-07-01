#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int n, int l, int mid, int r){
  int i = l, j = mid+1, k = l;
  int b[n];
  while(i<=mid && j<=r){
    if(a[i] < a[j]){
      b[k] = a[i];
      i++;
    }else{
      b[k] = a[j];
      j++;
    }
    k++;
  }
  if (i>mid){
    while(j<=r){
      b[k] = a[j];
      k++;
      j++;
    }
  }else{
    while(i<=mid){
      b[k] = a[i];
      k++;
      i++;
    }
  }
  for (k = l; k <=r; ++k){
    a[k] = b[k];
  }
}

void merge_sort(int a[], int n, int l , int r){
  if (l >= r){
    return;
  }
  int mid = l + (r - l)/2;
  merge_sort(a, n, l, mid);
  merge_sort(a, n, mid+1, r);
  merge(a, n, l, mid, r);
}

void print_array(int a[], int n){
  for (int i = 0; i < n; ++i){
    cout << a[i] << " ";
  }
  cout << endl;
}

int main(){
  int a[] = {12, 11, 13, 5, 6, 7};
  int n = sizeof(a)/ sizeof(a[0]);
  cout << "Given array is:" << endl;
  print_array(a, n);
  merge_sort(a,n, 0, n -1);
  cout << "Sorted array is:" << endl;
  print_array(a, n);
  return 0;
}

