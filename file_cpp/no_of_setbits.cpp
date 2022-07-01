#include <iostream>
using namespace std;

int numSetBits(unsigned int n) {
    int count=0;
    while(n!=0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
  unsigned int a;
  cin >> a;
  cout << numSetBits(a) << endl;
  return 0;
}