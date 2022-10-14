class Solution {

public:

    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {

        int n = nums.size(), xorr = 0;

        vector<int> res(n);

        for(auto num : nums) xorr = xorr ^ num;

        xorr ^= (1 << maximumBit)-1;

        res[0] = xorr;

        for(int i=1; i<n; i++){
          
            res[i] = xorr ^= nums[n-i];
        }
        return res;
    }
};