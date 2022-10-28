class Solution {

public:

    int triangularSum(vector<int>& nums) {

        for(int i=nums.size()-1; i>=1; i--){

            for(int k=0; k<i; k++){
              
                nums[k] = (nums[k]+nums[k+1])%10;
            }
        }
        return nums[0];
    }
};