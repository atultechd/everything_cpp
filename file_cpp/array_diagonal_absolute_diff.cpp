#include <iostream>
using namespace std;


int main (){

 int n , sum1 = 0, sum2 = 0;
 cin >> n;
 int arr[n][n];
 for(int i = 0; i<n ; i++){
  for(int j = 0; j<n ; j++){
    cin >> arr[i][j];
    if (i == j) {
      sum1 += arr[i][j];
    }
    if (i == n -j -1){
      sum2 += arr[i][j];
    }

  }
}
if (sum1 > sum2){
 cout << sum1 - sum2 << endl;
}else {
 cout << sum2 - sum1 << endl;
}
return 0;
}