#include<bits/stdc++.h>

// first approach by sorting.
vector<int> Klargest(vector<int> &a, int k, int n) {

    sort(a.begin(), a.end(), greater<int>());

    vector<int> res;

    for(int i=0; i<k; i++){

        res.push_back(a[i]);
    }

    sort(res.begin(), res.end());

    return res;
}


// .................................................................

// second approach by using priority_queue(min heap)
vector<int> Klargest(vector<int> &a, int k, int n) {

    priority_queue<int,vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++){

        if(pq.size() < k){

            pq.push(a[i]);

        }else{

            if(pq.top() <= a[i]){

                pq.pop();

                pq.push(a[i]);
            }
        }
    }
    vector<int> res;

    while(!pq.empty()){

        res.push_back(pq.top());

        pq.pop();
    }

    return res;
}