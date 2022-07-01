#include <iostream>
using namespace std;

long fast_mod_exp(long a, long b, int m){
  long res = 1;
  while(b > 0){
    if (b & 1){
      res = (res * (a % m)) % m;
    }
    a = (a % m * a % m) % m;
    b = b >> 1;
  }
  return res;

}

  int main(){
    cout << fast_mod_exp(232 , 323, 8242355) << endl;
    return 0;
  }
  