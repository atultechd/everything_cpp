#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> str;
    
    for(int i = 0; i < n; i++){
        string var;
        cin >> var;
        str.push_back(var);
    }
    
    for(int i = n-1; i >= 0; i--){
        cout << str[i] << endl;
    }
    return 0;
}