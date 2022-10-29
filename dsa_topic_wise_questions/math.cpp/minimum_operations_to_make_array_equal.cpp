class Solution {

public:

    int minOperations(int n) {

        vector<int> res;

        int count = 0;

        for(int i=0; i<n; i++){

            res.push_back((2*i)+1);
            
            count += abs(n-res[i]);
        }
        return count/2;
    }
};