#include <iostream>
using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if (n%2 == 0){
      if (n%4 == 0){
        cout << n/2 << " " << n/4 << " " << n/4 << endl;
      }
      else{
        cout << n/2 - 1 << " " << n/2 - 1 << " " << "2" << endl;
      }
    }
    else{
      cout << n/2 << " " << n/2 << " " << "1" << endl;
    }
    cout << endl;

  }
  
  return 0;
}