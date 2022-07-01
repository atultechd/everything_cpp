#include <iostream>
using namespace std;

int no_of_days_needs_with_capacity(int weigth[], int n, int capacity){
  int days_required = 1;
  int current = 0;
  for(int i=0; i < n; i++){
    current += weigth[i];
    if (current > capacity){
      days_required++;
      current = weigth[i];
    }
  }
  return days_required;
}

int ship_within_days(int weigth[], int n, int D){
  int min = 0, maxi = 0;
  for(int i=0; i < n; i++){
    min = max(weigth[i], min);
    maxi += weigth[i];
  }
  int retval = 0;
  while(min <= maxi){
    int mid = (min + maxi)/2;
    int days_required = no_of_days_needs_with_capacity(weigth, n, mid);
    if (days_required > D){
      min = mid+1;
    }
    else{
      retval = mid;
      maxi = mid - 1;
    }
  }
  return retval;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int days = 5, n =10;
  cout << ship_within_days(arr, n, days) << endl;
  return 0;
}