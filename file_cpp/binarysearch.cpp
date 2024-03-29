#include <iostream>
using namespace std;

// Note: The array should be sorted first then only you are able to do B.Search 
int binarysearch(int arr[], int n, int key){
  int start = 0;
  int end = n;
  while(start <= end){
    int mid = (start+end)/2;

    if (arr[mid] == key){
      return mid;
    }else if (arr[mid] > key){
      end = mid -1;
    }else {
      start = mid + 1;
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
  cout << binarysearch(arr, n, key) << endl;
  return 0;
}

// time complexity O(log n)