class Solution {

public:

    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> temp(nums.begin()+n, nums.end());

        vector<int> res;

        for(int i = 0; i<nums.size()-n; i++){

            res.push_back(nums[i]);
            
            res.push_back(temp[i]);
        }
        return res;
    }
};