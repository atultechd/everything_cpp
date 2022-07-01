#include <iostream>
using namespace std;

void interesting_subarr(int arr[], int n){
  int p = 0;
  for (int i = 0; i < n-1; ++i){
    if (abs(arr[i] - arr[i+1]) >= 2){
      cout << "yes" << endl;
      cout << i << " " << i+1 <<endl;
      p = 1;
      break;
    }
  }
  if (!p){
    cout << "no" << endl;
  }
}

int main(){
  int n = 4;
  int arr[] = {2,0,1,9};
  interesting_subarr(arr, n);
  return 0;
}