#include <iostream>
using namespace std;

int find_feasible(int boards[], int n, int limit){
  int sum = 0, painters = 1;
  for (int i = 0; i < n; ++i){
    sum += boards[i];
    if (sum>limit){
      sum = boards[i];
      painters++;
    }
  }
  return painters;
}

int painterspartition(int boards[], int n, int m){
  int total_length = 0, k = 0;
  for (int i = 0; i < n; ++i){
    k = max(k, boards[i]);
    total_length += boards[i];
  }
  int low = k, high = total_length;
  while(low < high){
    int mid = (low + high)/2;
    int painters = find_feasible(boards, n, mid);
    if (painters <= m){
      high = mid;
    }
    else{
      low = mid -1;
    }
  }
  return low;
}

int main(){
  int n = 4;
  int boards[] = {1,8,11,3};
  int m = 10;
  cout << painterspartition(boards, n, m)<< endl;
  return 0;
}