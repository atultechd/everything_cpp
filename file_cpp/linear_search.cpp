#include <iostream>
using namespace std;

int linear_search(int arr[], int a, int key){
  int i;
  for (i = 0; i < a; ++i){
    if (arr[i] == key){
      return i;
    }
  }
  return -1;
}

int main(){
  int n, key;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cin >> key;
  cout << linear_search(arr, n, key) << endl;
  return 0;
}

// time complexity O(n)