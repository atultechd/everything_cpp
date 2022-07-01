#include <iostream>
using namespace std;

int main(){
  int marks[5];
  for (int i = 0; i <= 5; ++i){
    cout<<"Enter the marks of" <<i<<"th student"<<endl;
    cin>>marks[i];
  }
  return 0;
}