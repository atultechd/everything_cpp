#include <iostream>
using namespace std;

void Zero_one_separation(int arr[], int n){
  int left = 0;
  int right = n-1;
  while(left <= right){
    if (arr[left] == 0 && arr[right] == 0){
      left ++;
    }
    else if (arr[left] == 1 && arr[right] == 0){
      int temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left ++;
      right --;
    }
    else if (arr[left] == 1 && arr[right] == 1){
      right --;
    }
    else{
      left ++;
      right --;
    }
  }
  for (int i = 0; i < n; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int n = 10;
  int arr[] = {1,0,0,1,0,0,0,1,1,0};
  Zero_one_separation(arr, n);
  return 0;
}