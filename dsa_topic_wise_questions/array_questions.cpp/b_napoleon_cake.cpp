#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  int temp = arr[n-1];
  int b[n] = {0};
  for (int i = n-1; i >= 0; --i){
    if (temp != 0 || arr[i] != 0){
      b[i] = 1;
      temp = max(temp, arr[i]);
      temp --;
    }
    else{
      temp = arr[i];
    }
  }
  for (int i = 0; i < n; ++i){
    cout << b[i] << " ";
  }
  cout << endl;
  return 0;
}