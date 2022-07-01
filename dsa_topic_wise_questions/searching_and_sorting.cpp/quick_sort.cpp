#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

int partition(int arr[], int low, int high){ 
  int pivot = arr[low];
  int i= low;
  int j= high;

  while(i<j){
    while(arr[i]<=pivot && i<j){
      i++;
    }
    while(arr[j]>pivot){
      j--;
    }
    if (i<j){
      swap(arr, i, j);
    }
  }
  swap(arr, j, low);
  return j;
}

void quick_sort(int arr[], int low0 , int high0){
  if (low0<high0){
    int pivot = partition(arr, low0, high0);
    quick_sort(arr, low0, pivot-1);
    quick_sort(arr, pivot+1, high0);
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

