#include <iostream>
using namespace std;

class Employee{
  public:
   string name;  
   int salary;
};


int main(){
  Employee var;
  var.name = "atul";
  var.salary = 100;
  cout<<"The name of the first Employee is "<<var.name<<" and salary is "<<var.salary<<endl;

  return 0;
}