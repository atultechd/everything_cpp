#include <iostream>
using namespace std;

int max_dis_to_closest(int arr[], int n){
  int l = -1, max_dis = 0;
  for (int i = 0; i < n; ++i){
    if (arr[i] == 1){
      if (l == -1){
        max_dis = i;
      }
      else{
        max_dis = max(max_dis, (i-l)/2);
      }
      l = i;
    }
  }
  if (arr[n-1] == 0){
    max_dis = max(max_dis, n-1-l);
  }
  return max_dis;
}

int main(){
  int n = 8;
  int arr[] = {1, 0, 0, 0, 1, 0, 0, 1};
  cout << max_dis_to_closest(arr, n) << endl;
  return 0;
}