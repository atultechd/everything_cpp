// codeforces 1729
// code is good but don't know why it's not getting submitted..
#include <bits/stdc++.h>

using namespace std;

string solve(string t){

    stringstream a(t);

    long temp = 0;

    a >> temp;

    string res = "";

    while(temp > 0){

        int ans = 0;

        if(temp % 10 == 0){

            temp /= 10;

            ans = temp % 100;

            res = (char)(ans + 'a'-1) + res;

            temp = temp / 100;
        }
        else{

            ans = temp % 10;

            res = (char)(ans + 'a'-1) + res;

            temp = temp / 10;
        }
    }
    return res;
}

int main() {

    int q;

    // cout << "insert testcases : ";

    cin >> q;

    while(q--){

        int n;

        string t;

        // cout << "insert size of string : ";

        cin >> n;

        // cout << "insert string : ";

        cin >> t;

        // cout << "Your output is : ";
        
        cout << solve(t) << endl;
    }
    
    return 0;
}