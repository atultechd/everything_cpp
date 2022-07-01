#include <iostream>
#include <vector>
using namespace std;
#define inf 1e9
int min_jump(int arr[], int n){
  vector<int> jumps(n, inf);
  if (arr[0] == 0){
    cout << inf << " ";
    return 0;
  }
  jumps[0] = 0;
  for (int i = 1; i < n ; ++i){
    for (int j = 0; j<i; ++j){
      if (i <= (j + arr[j])){
        jumps[i] = min(jumps[i], jumps[j]+1);
      }
    }
  }
  return jumps[n-1];
}

int main(){
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }

  cout << min_jump(arr, n) << endl;
  return 0;
}