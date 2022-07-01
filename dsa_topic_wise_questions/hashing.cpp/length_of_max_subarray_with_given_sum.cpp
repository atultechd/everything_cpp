#include <iostream>
#include <unordered_map>

using namespace std;

int length_of_long_subarray(int arr[], int n, int k){
  unordered_map<int, int>m;
  int current_sum = 0;
  int max_length = 0;

  for (int i = 0; i < n; ++i){
    current_sum += arr[i];

    if (current_sum == k){
      max_length = i + 1;
    }
    if (m.find(current_sum) == m.end()){
      m[current_sum] = i;
    }
    if (m.find(current_sum - k) != m.end()){
      if (max_length < (i - m[current_sum - k]) ){
        max_length = i - m[current_sum - k];
      }
    }
  }
  return max_length;
}

int main(){
  int n;
  int k;
  cin >> n;

  int arr[n]; 

  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cin >> k;

  cout << length_of_long_subarray(arr, n, k) << endl;

  return 0;

}