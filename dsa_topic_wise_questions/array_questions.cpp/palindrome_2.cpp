#include <iostream>
using namespace std;

bool is_palindrome(char arr[], int i, int j){
  while(i < j){
    if (arr[i] == arr[j]){
      i++;
      j--;
    }
    else {
      return false;
    }
  }

  return true;
}

bool valid_palindrome(char arr[], int n){
  int i = 0;
  int j = n-1;
  while(i < j){
    if (arr[i] == arr[j]){  
      i++;
      j--;
    }
    else{
      return is_palindrome(arr, i+1, j) || is_palindrome(arr, i, j-1);
    }
  }

  return true;
}

int main(){
  char c[] = {'a','b','c','e','f','g','f','e','h','c','b','a'};
  int n = sizeof(c)/sizeof(c[0]);
  cout << "size "<< n << endl;
  cout << valid_palindrome(c, n) << endl;
}