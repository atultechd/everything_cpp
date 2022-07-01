#include <iostream>
using namespace std;

void check_pair(int arr[], int n, int sum){
  for (int i = 0; i < n; ++i){
    for (int j = n-1; j >= 0 ; --j){
      if (arr[i] + arr[j] == sum){
        cout << arr[i] << " " << arr[j] << endl;
        cout << "valid pairs" << endl;
      }
      break;
    }
  }
}

int main(){
  int n = 5;
  int arr[] = {0,-1,2,-3,1};
  int sum = -2;
  check_pair(arr, n, sum);
  return 0;
}