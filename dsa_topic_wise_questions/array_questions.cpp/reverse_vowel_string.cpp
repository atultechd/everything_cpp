#include <iostream>
using namespace std;

bool is_vowel(char arr[], int index){
  char ch = arr[index];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
      return true;
    }
  return false;
}

void swap(char arr[], int left, int right){
  char temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
}

void reverse_vowel_only(char arr[], int n){
  int left = 0;
  int right = n-1;
  while(left < right){
    while(left < right && is_vowel(arr, left) == false){
      left++;
    }
    while(left < right && is_vowel(arr, right) == false){
      right--;
    }
    swap(arr, left, right);
    left++;
    right--;
  }
}

int main(){
  int n = 5;
  char arr[] = {'h', 'e', 'l', 'l', 'o'};
  reverse_vowel_only(arr, n);
  for (int i = 0; i < n; ++i){
    cout << arr[i];
  }
  cout << endl;
  return 0;
}