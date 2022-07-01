#include <bits/stdc++.h>
using namespace std;

int min_platform(int arr[], int dep[], int n){
  sort(arr, arr + n);
  sort(dep, dep + n);
  int max_trains = 0;
  int platforms = 0;
  int i = 0;
  int j = 0;
  while(i < n && j < n){
    if (arr[i] <= dep[j]){
      max_trains++;
      i++;
    }
    else{
      max_trains--;
      j++;
    }
    platforms = max(max_trains , platforms);
  }

  return platforms;
}

int main(){
  int n = 2;
  int arr[] = {900, 940};
  int dep[] = {910, 1200};
  cout << min_platform(arr, dep, n) << endl;
  return 0;
}