class Solution {

public:

    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> res(nums.size(),0);

        int low = 0,equal=0,high;

        for(auto it: nums){

            if(it < pivot) low++;

            else if(it == pivot) equal++;
        }

        high = low+equal;

        equal = low;

        low = 0;

        for(auto it: nums){

            if(it < pivot) res[low++] = it;

            else if(it == pivot) res[equal++] = it;
            
            else res[high++] = it;
        }
        return res;
    }
};