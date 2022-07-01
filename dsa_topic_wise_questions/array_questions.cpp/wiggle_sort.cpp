#include<iostream>
using namespace std;

void swap(int arr[], int left, int right){
  int temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
}

void wiggle_sort(int arr[], int n){
  for (int i = 0; i < n-1; ++i){
    if (i % 2 == 0){
      if (arr[i] > arr[i + 1]){
        swap(arr, i, i+1);
      }
    }
    else{
      if (arr[i] < arr[i + 1]){
        swap(arr, i, i+1);
      }
    }
  }
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
  wiggle_sort(arr , n);
  return 0;
}
