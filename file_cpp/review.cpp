#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    cin >> n;
     for(int j = 0 ; j < n; j++) {
        string s;
        cin >> s;
        string s1, s2;
        for (int i=0; i<s.size(); i++) {
            if (i%2 != 0) {
                s1 += s[i];
            }else {
                s2 += s[i];
            }
        }
        cout << s2 << " " << s1 << endl;
    }
    return 0;
}
