#include <iostream>
using namespace std;

int consecutive_num_sum(int n){
  int count = 0;
  for (int k = 1; 2 * n > k*(k-1) ; k++){
    int numerator = n - (k * (k-1) /2 );
    if (numerator % k == 0){
      count ++;
    }
  }
  return count;
}

int main(){
  int n;
  cin >> n;
  cout << consecutive_num_sum(n) << endl;
  return 0;
}￼￼￼￼￼￼