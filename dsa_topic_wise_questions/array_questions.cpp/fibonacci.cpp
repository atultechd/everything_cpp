// #include <iostream>
// using namespace std;

// void fibonacci(int n){
//   int arr[n];
//   arr[0] = 0;
//   arr[1] = 1;
//   for (int i = 2; i < n; ++i){
//     arr[i] = arr[i-2] + arr[i-1];
//   }
//   for (int i = 0; i < n; ++i){
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int main(){
//   int n;
//   cin >> n;
//   fibonacci(n);
// }


// This program will print the fibonacci no. of particular input.....
#include <iostream>
using namespace std;

int fibonacci(int n){
  int arr[n];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= n; ++i){
    arr[i] = arr[i-2] + arr[i-1];
  }
  return arr[n-1];
}

int main(){
  int n;
  cin >> n;
  cout << fibonacci(n) << endl;
}