#include <iostream>
using namespace std;

void segregate_odd_even(int arr[], int n){
  int left = 0;
  int right = n-1;

  while(left <= right){

    if (arr[left] % 2 != 0 && arr[right] % 2 == 0){
      int temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left ++;
      right --;
    }
    else if (arr[left] % 2 == 0 && arr[right] % 2 == 0){
      left ++;
    }
    else if (arr[left] % 2 != 0 && arr[right] % 2 != 0){
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
  int n = 4;
  int arr[] = {3,1,2,4};
  segregate_odd_even(arr, n);
  return 0;
}