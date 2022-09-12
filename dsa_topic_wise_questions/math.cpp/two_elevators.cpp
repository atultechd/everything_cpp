// codeforces contest 1729

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    // cout << "insert no. of tescases : " << endl;

    cin >> t;

    while(t--){

        int f1,f2,f3;

        // cout << "insert f1,f2,f3 " << endl;

        cin >> f1 >> f2 >> f3;

        int temp1 = f1-1;

        int temp2;

        // cout << "your output is : ";

        if(f2 >= f3) temp2 = (f2-f3) + (f3-1);

        else temp2 = (f3-f2) + (f3-1);

        if(temp1 > temp2) cout << 2 << endl;

        else if(temp1 < temp2) cout << 1 << endl;

        else cout << 3 << endl;
        
        // cout << endl;
    }
    return 0;
}