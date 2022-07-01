#include <iostream>
using namespace std;

int max_container(int arr[], int n){
  int i = 0;
  int j = n-1;
  int water = 0;
  while(i < j){
    int w = j - i;
    int h = min(arr[i], arr[j]);
    water = max(water, h * w);
    if (arr[i] < arr[j]){
      i ++;
    }else{
      j --;
    }
  }
  return water;
}

int main(){
  int n = 9;
  int arr[] = {1,8,6,2,5,4,8,3,7};
  cout << max_container(arr, n) << endl;
  return 0;
}