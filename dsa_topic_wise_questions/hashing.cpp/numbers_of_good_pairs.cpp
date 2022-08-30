class Solution {

public:

    int numIdenticalPairs(vector<int>& nums) {

        int res = 0;

        unordered_map<int,int> u_map;

        for(int i=0; i<nums.size(); i++){
          
            res += u_map[nums[i]]++;
        }
        return res;
    }
};