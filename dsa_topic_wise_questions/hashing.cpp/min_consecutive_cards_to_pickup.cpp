class Solution {

public:

    int minimumCardPickup(vector<int>& c) {

        int n = c.size();

        int res = INT_MAX;

        unordered_map<int,int> m;

        for(int i=0; i<n; i++){

            if(m.find(c[i]) != m.end()){

                res = min(res, i-m[c[i]] + 1);
            }

            m[c[i]] = i;
        }

        if(res== INT_MAX) return -1;
        
        return res;
    }
};