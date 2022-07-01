#include <iostream>
using namespace std;

// input size of array
int main(){
  int n;
  cin >> n;

// declaring array
  int arr[n];

// input elements in array
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cout << endl;

  // reverse array logic
  int start = 0;
  int end = n-1;

  while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < n; ++i){
    cout << arr[i] <<" ";
  }
  return 0;
}