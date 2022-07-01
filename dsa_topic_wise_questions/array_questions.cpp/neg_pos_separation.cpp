#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i){
    cin >> a[i];
  }

  int l=0, r=n-1;
  while(l <= r){

    if (a[l]<0 && a[r]<0){
      l+=1;
    }else if (a[l]>0 && a[r]<0){
      int temp = a[l];
      a[l] =a[r];
      a[r] =temp;
      l+=1;
      r-=1;
    }else if (a[l]>0 && a[r]>0){
      r-=1;
    }else{
      l+=1;
      r-=1;
    }

  }
    for (int i = 0; i < n; ++i) {
      cout << a[i] << " " ;
    }
    cout << endl;
  return 0;
}