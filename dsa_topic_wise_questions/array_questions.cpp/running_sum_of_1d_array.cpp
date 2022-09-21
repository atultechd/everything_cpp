class Solution {

public:

    vector<int> runningSum(vector<int>& nums) {

        vector<int> res;

        for(int i=0; i<nums.size(); i++){

            int sum = 0;

            for(int j=0; j<=i; j++){

                sum += nums[j];
                
            }
            res.push_back(sum);
        }
        return res;
    }
};


// .......................................................

// with optimization
class Solution {

public:

    vector<int> runningSum(vector<int>& nums) {

        vector<int> res;

        res.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++){

            nums[i] += nums[i-1];

            res.push_back(nums[i]);
        }
        return res;
    }
};