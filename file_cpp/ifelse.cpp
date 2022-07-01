#include <iostream>
using namespace std;

int main(){
  int salary = 20000;
  int years_of_service = 10;
  int total_salary= salary * years_of_service;
  int bonus_years = total_salary - 5*salary;
  int bonus = bonus_years / 20;

  if (years_of_service < 5){
    cout << "salary is " << total_salary << "with no bonus" << endl;
  }
  else{
    cout << "salary is " << total_salary <<" your bonus is " << bonus << endl;
  }

  return 0;
}