class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> res;

        unordered_map<int,int> m;

        for(int i=0; i<nums.size(); i++){

            int temp = target - nums[i];

            if(m.find(temp) != m.end()){

                res.push_back(m[temp]);
                
                res.push_back(i);
            }
            m[nums[i]] = i;
        }
        return res;
    }
};