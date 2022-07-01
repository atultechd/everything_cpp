#include <iostream>
using namespace std;

void range_addition(int queries[3][3], int n){
  int result[n];
  for (int i = 0; i < n; ++i){
    result[i] = 0;
  }
  for (int q = 0; q < 3; ++q){
    int st = queries[q][0];
    int end = queries[q][1];
    int inc = queries[q][2];

    result[st] += inc;
    if (end + 1 < n){
      result[end + 1] -= inc;
    }
  }
  int sum = 0;
  for (int i = 0; i < n; ++i){
    sum += result[i];
    result[i] = sum;
  }
  for (int i = 0; i < n; ++i){
    cout << result[i] << " ";
  }
  cout << endl;
}

int main(){
  int n = 5;
  int queries[][3] = {{1,3,2},
                     {2,4,3},
                     {0,2,-2}};
  range_addition(queries, n);
  return 0;
}