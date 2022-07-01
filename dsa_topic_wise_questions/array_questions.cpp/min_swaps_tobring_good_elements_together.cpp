#include <iostream>
using namespace std;

int min_swaps(int arr[], int n, int k){
  int good = 0;
  int bad = 0;

  for (int i = 0; i < n; ++i){
    if (arr[i] <= k) good++;
  }
  for (int i = 0; i < good; ++i){
    if (arr[i] > k) bad++;
  }

  int i = 0, j = good, ans = bad;
  while(j < n){
    if (arr[i] > k){
      bad --;
    }
    if (arr[j] > k){
      bad ++;
    }
    ans = min(ans , bad);
    j++;
    i++;
  }
  return ans;
}

int main(){
  int n = 5;
  int arr[] = {2,1,5,6,3};
  int k = 3;
  cout << min_swaps(arr, n, k) << endl;
  return 0;
}