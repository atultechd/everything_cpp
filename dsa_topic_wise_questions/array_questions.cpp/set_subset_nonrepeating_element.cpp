#include <iostream>
using namespace std;

int main(){
  int m, n;
  cin >> m >> n;

  int arr1[m];
  int arr2[n];
  for (int i = 0; i < m; ++i){
    cin >> arr1[i];
  }
  for (int j = 0; j < n; ++j){
    cin >> arr2[j];
  }
  int counter = 0;
  int count =0;
  for (int i = 0; i < m; ++i){
    for (int j = 0; j < n; ++j){
      if (arr1[i] != arr2[j]){
        counter +=1;
      }
      count += 1;
    }
  }
  cout << m + n - (count - counter) << endl;
  return 0;
}