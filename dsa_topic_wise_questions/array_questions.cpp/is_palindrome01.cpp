#include <iostream>
using namespace std;

bool ispalindrome(int x){
  if (x == 0) return true;
  if (x < 0 || x % 10 == 0) return false;
  int reversed_no = 0;
  while(x > reversed_no){
    int pop = x % 10;
    x /= 10;
    reversed_no = (reversed_no * 10) + pop;
  }

  if (x == reversed_no || x == reversed_no/10) return true;
  else return false;
}

int main(){
  cout << ispalindrome(1251) << endl;
  return 0;
}