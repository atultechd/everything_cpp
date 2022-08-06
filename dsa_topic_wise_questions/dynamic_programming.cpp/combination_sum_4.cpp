
class Solution {

public:
    
    int combinationSum4(vector<int>& nums, int target) {

        if(target==0) return 1;

        int count = 0;

        for(int i=0; i<nums.size(); i++){

            if(target >= nums[i]){

                count += combinationSum4(nums, target-nums[i]);
            }
        }
        return count;
    }
};


// .......................................................................

class Solution {

public:

    int combinationSum4(vector<int>&nums, int target){

        vector<int> dp(target+1, -1);

        dp[0] = 1;

        return helper(nums,target,dp);
    }
    
    int helper(vector<int>& nums, int target, vector<int> &dp) {

        if(dp[target] != -1) return dp[target];

        int count = 0;

        for(int i=0; i<nums.size(); i++){

            if(target >= nums[i]){

                count += helper(nums, target-nums[i], dp);
            }
        }
        return dp[target] = count;
    }
};