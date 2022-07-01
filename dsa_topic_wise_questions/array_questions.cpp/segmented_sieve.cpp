#include <bits/stdc++.h>
using namespace std;

int prime_sieve(int m , int n){
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  for (int i = 2; i * i<= n; ++i){
    if (prime[i] == true){
      for (int j = i * i; j <= n; j+=i){
        prime[j] = false;
      }
    }
  }
  for (int k = m; k <= n; ++k){
    if (prime[k]){
      cout << k << " ";
    }
  }
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int m , n;
    cin >> m >> n;
    prime_sieve(m, n);
  }
  return 0;
}