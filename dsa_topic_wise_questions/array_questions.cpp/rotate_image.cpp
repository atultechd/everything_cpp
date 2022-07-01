#include <iostream>
using namespace std;

void transpose(int arr[4][4]){
  for (int i = 0; i < 4; ++i){
    for (int j = 0; j < i; ++j){
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }
}

void rotate(int arr[4][4]){
  int n = 4;
  for (int i = 0; i < 4; ++i){
    int left = 0;
    int right = n - 1;
    while(left < right){
      int temp = arr[i][left];
      arr[i][left] = arr[i][right];
      arr[i][right] = temp;
      left++;
      right--;
    }
  }
}

int main(){
  int arr[4][4] = {{5,1,9,11},
                   {2,4,8,10},
                   {13,3,6,7},
                   {15,14,12,16}};
  transpose(arr);
  rotate(arr);
  for (int i = 0; i < 4; ++i){
    for (int j = 0; j < 4; ++j){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}