class Solution {

public:

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> res;
        
        for(int i = 0; i<nums.size(); i++){

            int count = 0;

            for(int j=0; j<nums.size(); j++){

                if(nums[j] < nums[i] && j!= i) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};

// ............................................................................

class Solution {

public:

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> res;
        
        int count[101] = {0};

        for(int i=0; i<nums.size(); i++){

            count[nums[i]]++;
        }

        for(int i=1; i<101; i++){

            count[i] += count[i-1];
        }

        for(int i=0; i<nums.size(); i++){

            if(nums[i] == 0) res.push_back(0);
            
            else res.push_back(count[nums[i]-1]);
        }
        return res;
    }
};