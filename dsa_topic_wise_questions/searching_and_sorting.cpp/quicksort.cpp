#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

int partition(int a[], int l, int h){
  int pivot = a[l], i = l, j = h;
  while(i<j){
    while(a[i]<= pivot)i++;
    while(a[j]> pivot)j--;
    if (i<j){
      swap(a,i,j);
    }  
  }
  swap(a,j,l);
  return j;
}

void quick_sort(int a[], int l, int h){
  if(l<h){
    int pivot = partition(a,l,h);
    quick_sort(a,l,pivot-1);
    quick_sort(a,pivot+1,h);
  }
}

void print_array(int arr[], int n){
  for (int i = 0; i < n; ++i){
    cout << arr[i] << " ";
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

  int low0 = 0;
  int high0 = n-1;

  quick_sort(arr, low0, high0);

  print_array(arr, n);
  return 0;
}

