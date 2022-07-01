#include <iostream>
using namespace std;

int main(){
  string name = "Atul";
  cout<<"The name is"<<name<<endl;
  cout<<"The length of the name is "<<name.length()<<endl;
  cout<<"The name is "<<name.substr(0,3)<<endl;
  cout<<"The name is "<<name.substr(1,2)<<endl;
  return 0;
}