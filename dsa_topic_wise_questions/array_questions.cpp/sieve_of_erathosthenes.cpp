#include <bits/stdc++.h>
using namespace std;

int prime_sieve(int n){
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  for (int i = 2; i * i<= n; ++i){
    if (prime[i] == true){
      for (int j = i * i; j <= n; j+=i){
        prime[j] = false;
      }
    }
  }
  for (int k = 2; k <= n; ++k){
    if (prime[k]){
      cout << k << " ";
    }
  }
  cout << endl;
}

int main(){
  int n;
  cin >> n;
  prime_sieve(n);
  return 0;
}