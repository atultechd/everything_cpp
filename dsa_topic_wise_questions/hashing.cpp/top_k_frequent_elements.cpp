class Solution {

public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> u_map;

        for(int i=0; i<nums.size(); i++){

            u_map[nums[i]]++;
        }

        vector<int> temp;

        vector<int> res;

        for(auto it : u_map){

            temp.push_back(it.second);
        }

        sort(temp.begin(), temp.end(), greater<int>());

        for(auto it : u_map){

            for(int j=0; j<k; j++){

                if(temp[j] == it.second){

                    res.push_back(it.first);
                    
                    it.second = 0;
                }
            }
            if(res.size() == k) break;
        }
        return res;
    }
};