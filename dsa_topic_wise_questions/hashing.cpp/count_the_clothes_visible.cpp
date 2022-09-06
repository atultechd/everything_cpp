#include <bits/stdc++.h>

using namespace std;

int fx(int len, vector<vector<int>> &arr, int n){

    unordered_map<int,int> u_map;

    for(int i=0; i<arr.size(); i++){

        for(int j=arr[i][0]; j< arr[i][0] + arr[i][1]; j++){

            u_map[j] = i;
        }
    }
    set<int> o_set;

    for(auto x : u_map){

        o_set.insert(x.second);
    }
    return o_set.size();
}

int main() {

    vector<vector<int>> arr = {{0,4},{6,3},{1,5},{6,4},{7,2}};
    
    cout << fx(10, arr, 5) << endl;

    return 0;
}