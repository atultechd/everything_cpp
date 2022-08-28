// codeforces contest..........(accepted)
// Problem : 1721-A
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--){

        char c[2][2];

        for(int i=0; i<2; i++){

            for(int j=0; j<2; j++){

                cin >> c[i][j];
            }
            cout << endl;
        }
        unordered_set<char> u_set;

        for(int i=0; i<2; i++){

            for(int j=0; j<2; j++){

                if(u_set.find(c[i][j]) == u_set.end()){

                    u_set.insert(c[i][j]);
                }
            }
        }
        cout << u_set.size()-1 << endl;
        
    } 

    return 0;
}