#include <iostream>
using namespace std;

int num_times_all_blue(int light[], int n){
  int right_max = -1;
  int count = 0;
  for (int i = 0; i < n; ++i){
    if (light[i] > right_max){
      right_max = light[i];
    }
    if (right_max == i+1){
      count ++;
    }
  }
  return count;
}

int main(){
  int n = 5;
  int light[] = {2, 1, 3, 5, 4};
  cout << num_times_all_blue(light, n) << endl;
  return 0;
}