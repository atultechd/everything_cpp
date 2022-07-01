#include <iostream>
using namespace std;

  int add(int a, int b){
    int c;
    c = a + b;
    return c;
  }

int main(){
  int a, b;
  cout<<"Enter the first no:\n";
  cin>>a;

  cout<<"Enter the second no:\n";
  cin>>b;

  cout<<"The sum is "<<add(a, b)<<endl;
  return 0;
}