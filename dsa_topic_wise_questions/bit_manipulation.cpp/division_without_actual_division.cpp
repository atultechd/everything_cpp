#include<iostream>
using namespace std;

int divide(int dividend, int divisor){
  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
  int quotient = 0;
  while(dividend >= divisor){
    dividend -= divisor;
    ++ quotient;
  }
  return quotient;
}
// time complexity = O(n)
// Note:- here " ^ " is bitwise XOR

long long divide01(long dividend, long divisor){
  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
  int quotient = 0, temp = 0;
  for (int i = 31; i >= 0; --i){
    if (temp + (divisor << i) <= dividend){
      temp += divisor << i;
      quotient |= 1LL << i;
    }
  }
  (sign = -1) ? -quotient : quotient;

  return quotient;
}
// time complexity = O(log(n))
// Note:- here " ^ " is bitwise XOR
//        and " | " is bitwise OR

int main(){
  cout << divide(19, 3) << endl;
  cout << divide01(12, 3) << endl;
  return 0;
}