class Solution {

public:

    vector<int> partitionLabels(string s) {

        vector<int> res;

        unordered_map<char,int> u_map;

        for(int i=0; i<s.size(); i++){

            u_map[s[i]] = i;
        }

        int max_idx = 0;

        int prev = -1;

        for(int i=0; i<s.size(); i++){

            max_idx = max(max_idx, u_map[s[i]]);

            if(max_idx == i){

                res.push_back(max_idx-prev);
                
                prev = max_idx;
            }
        }
        return res;
    }
};