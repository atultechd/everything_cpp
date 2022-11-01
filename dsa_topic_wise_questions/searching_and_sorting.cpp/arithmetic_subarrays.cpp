class Solution {

public:

    bool compare(vector<int> &res){

        sort(res.begin(), res.end());

        int temp = res[1]-res[0];

        for(int i=1; i<res.size(); i++){

            if(res[i]-res[i-1] != temp) return false;
        }
        return true;
    
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

        int n = nums.size(), q = l.size();

        vector<bool> ans(q, true);

        for(int i=0; i<q; i++){

            vector<int> res;

            for(int j=l[i]; j<=r[i]; j++){

                res.push_back(nums[j]);
            }

            bool temp = compare(res);
            
            ans[i] = temp;
        }
        return ans;
    }
};