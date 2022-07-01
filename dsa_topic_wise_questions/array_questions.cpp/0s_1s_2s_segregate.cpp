#include <iostream>
using namespace std;

void print_arr(int arr[], int n){
  for (int j = 0; j < n; ++j){
      cout << arr[j] << " ";
    }
    cout << endl;
  }

void Zero_one_two_separation(int arr[], int n){
  int i, count0 = 0, count1 = 0, count2 = 0;
  for ( i = 0; i < n; ++i){
    switch(arr[i]){
      case 0:
        count0++;
        break;
      case 1:
        count1++;
        break;
      case 2:
        count2++;
        break;
    }
  }
    i = 0;
    while(count0 > 0){
      arr[i++] = 0;
      count0 --;
    }
    while(count1 > 0){
      arr[i++] = 1;
      count1 --;
    }
    while(count2 > 0){
      arr[i++] = 2;
      count2 --;
    }
  }

int main(){
  int n = 10;
  int arr[] = {1,0,2,0,2,0,2,1,2,1};
  Zero_one_two_separation(arr, n);
  print_arr(arr, n);
  return 0;
}