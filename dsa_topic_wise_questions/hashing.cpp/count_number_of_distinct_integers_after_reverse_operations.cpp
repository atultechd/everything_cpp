class Solution {

public:

    int countDistinctIntegers(vector<int>& nums) {  

        vector<int> res;

        for(int i=0; i<nums.size(); i++){

            string s = to_string(nums[i]);

            reverse(s.begin(), s.end());

            int temp = stoi(s);

            res.push_back(temp);
        }

        for(int i=0;i<res.size(); i++){

            nums.push_back(res[i]);
        }

        unordered_set<int> u_set;

        for(int i=0; i<nums.size(); i++){

            u_set.insert(nums[i]);
        }
        return u_set.size();
    }
};

// ......................................................................


class Solution {

public:

    int reverse(int num){

        int res = 0;

        while(num){

            res = (res*10) + (num%10);

            num = num/10;
        }
        return res;
    }
    
    int countDistinctIntegers(vector<int>& nums) {  

        unordered_set<int> u_set;

        for(auto n : nums){

            u_set.insert(n);
            
            u_set.insert(reverse(n));
        }
        return u_set.size();
    }
};