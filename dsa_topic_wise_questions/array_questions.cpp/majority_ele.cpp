#include <bits/stdc++.h>
using namespace std;

void majority_element(int arr[], int n){
  int ans_index = 0;
  int count = 1;

  for (int i = 0; i < n; ++i){
    if (arr[i] == arr[ans_index]){
      count ++;
    }
    else{
      count --;
    }
    if (count == 0){
      ans_index = i;
      count = 1;
    }
  }
  int count0 = 0;
  for (int i = 0; i < n; ++i){
    if (arr[ans_index] == arr[i]){
      count0 ++;
    }
  }
  cout << "The count of majority element is " << count0 << endl;
  cout << "The majority element is " << arr[ans_index] << endl;
}

int main(){
  int n = 5;
  int arr[] = {1, 1, 2, 3, 1};
  majority_element(arr, n);
  return 0;

}