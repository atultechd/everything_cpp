class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]]++;
                res.push_back(nums[i]);
            }
            m[nums[i]] = 1;
        }
        return res;   
    }
};