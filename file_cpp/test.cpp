#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int round_cost(double a, double b, double c){
    double d =  a + (a*(b + c)/100);
    return round(d);
}

int main()
{
    double meal_cost, tip_percent, tax_percent;
    cin >> meal_cost;
    cin >> tip_percent;
    cin >> tax_percent;
    
    cout <<fixed << setprecision(0)<< round_cost(meal_cost, tip_percent, tax_percent) << endl; 

    return 0;
}

