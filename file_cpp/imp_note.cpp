#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main() {
    int val = 3;
    long int b = 12345678912345l;
    char ch = 'a';
    float f = 334.230f;
    long double d = 14049.304930000l;
    cout<<val<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout << std::fixed << std::setprecision(3) << f <<endl;
    cout << std::fixed << std::setprecision(9) << d <<endl;
    return 0;
}