//  This program is for fun and for calculating compound interest....

#include <bits/stdc++.h>

using namespace std;

void compounding(float p, float r, int t, float &amount){

    if(t == 0) return;

    amount = (float) p + (float)(r*p)/100;

    compounding(amount,r,t-1,amount);
}

int main() {

    int t;

    cout << "Enter testcases : ";

    cin >> t;

    while(t--){

        int t;

        float p,r;

        cout << "Insert Principle,Rate,Time : ";

        cin >> p >> r >> t;

        float amount = 0;

        compounding(p,r,t,amount);

        cout << "Total amount you will get after " << t << " years is : ";
        
        cout << amount << endl;
    }
    return 0;
}