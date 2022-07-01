#include <bits/stdc++.h>
using namespace std;

// ek cheez yaad rakhna k jo index wale no. hain 
// vo hi elements bhi hone chahiye
// jao ab phodo :)

//  ... constraints.....

// n == arr.length
// 1 <= n <= 10
// 0 <= arr[i] < n
// All the elements of arr are unique. 

int max_partitions(int arr[], int n){
  int chunks = 0;
  int max_so_far = 0;
  for (int i = 0; i < n; ++i){
    max_so_far = max(max_so_far, arr[i]);
    if (max_so_far == i){
      chunks ++;
    }
  }
  return chunks;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }

  cout << max_partitions(arr, n) << endl;
  return 0;
}