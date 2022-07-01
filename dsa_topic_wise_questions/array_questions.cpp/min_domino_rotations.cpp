#include <iostream>
using namespace std;

#define INT_MAX 1e9

int min_domino_rotations(int top[], int bottom[], int n){
  int count1 = 0, count2 = 0,count3 = 0, count4 = 0;
  int num1 = top[0];
  int num2 = bottom[0];
  for (int i = 0; i < n; ++i){
    if (count1 != INT_MAX){
      if (top[i] == num1){
        // nothing to do...
      }
      else if (bottom[i] == num1){
        count1 ++;
      }
      else{
        count1 = INT_MAX;
      }
    }

    if (count2 != INT_MAX){
      if (bottom[i] == num1){
        // nothing to do...
      }
      else if (top[i] == num1){
        count2 ++;
      }
      else{
        count2 = INT_MAX;
      }
    }

    if (count3 != INT_MAX){
      if (bottom[i] == num2){
        // nothing to do...
      }
      else if (top[i] == num1){
        count3 ++;
      }
      else{
        count3 = INT_MAX;
      }
    }

    if (count4 != INT_MAX){
      if (top[i] == num2){
        // nothing to do...
      }
      else if (bottom[i] == num2){
        count4 ++;
      }
      else{
        count4 = INT_MAX;
      }
    }
  }
  int res = min(min(count1, count2), min(count3, count4));

  return res == INT_MAX ? -1 : res;
}
int main(){
  int n;
  cin >> n;
  int top[n], bottom[n];
  for (int i = 0; i < n; ++i){
    cin >> top[i];
  }
  for (int i = 0; i < n; ++i){
    cin >> bottom[i];
  }
  cout << min_domino_rotations(top, bottom, n) << endl;
  return 0;
}