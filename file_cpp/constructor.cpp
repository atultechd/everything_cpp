#include <iostream>
using namespace std;

class Employee{
  public:
   string name;  
   int salary;

   Employee(string name2, int salary2){
    this->name = name2;
    this->salary = salary2;
   }
};


int main(){
  Employee var("atul constructor", 10000000);
  cout<<"The name of the first Employee is "<<var.name<<" and salary is "<<var.salary<<" dollars"<<endl;

  return 0;
}