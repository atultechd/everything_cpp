#include<bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n){

  vector<pair<int,int>> res;

    sort(arr.begin(), arr.end());

    int s=0, e=n-1;

    while(s<e){

        if(arr[s]+arr[e]==target){

            res.push_back({arr[s], arr[e]});

            s++;
            e--;
        }

        else if(arr[s]+arr[e] < target) s++;

        else e--;
    }

    if(res.size()== 0) res.push_back({-1,-1});
    
    return res;
}
