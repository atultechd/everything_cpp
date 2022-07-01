#include <iostream>
using namespace std;

void fluctuations(int n){
  int arr[n];
  for (int i = 0; i < n; ++i){
    arr[i] = 0;
  }
  for (int i = 1; i <= n; ++i){
    for (int j = 1; j <= n; ++j){
      if (j % i == 0){
        if (arr[j-1] == 0){
          arr[j-1] = 1;
          continue;
        }
        if (arr[j-1] == 1){
          arr[j-1] = 0;
        }
      }
    }
   if (arr[i-1] == 1){
     cout << i-1 << " ";
   }
  }
  cout << endl;
}

int main(){
  fluctuations(9);
  return 0;
}