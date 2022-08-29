class Solution {

public:

    bool divideArray(vector<int>& nums) {

        int i=1;

        sort(nums.begin(), nums.end());

        while(i<nums.size()){

            if(nums[i-1] != nums[i]) return false;

            i += 2;
        }
        return true;
    }
};

// .............................................

class Solution {

public:

    bool divideArray(vector<int>& nums) {

        unordered_map<int,int> u_map;

        for(int i=0; i<nums.size(); i++){

            u_map[nums[i]]++;
        }

        int count = 0;

        for(auto x : u_map) count += x.second /2;
          
        return count==nums.size()/2 ? true : false;
    }
};