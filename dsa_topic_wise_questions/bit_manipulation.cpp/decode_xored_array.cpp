class Solution {

public:

    vector<int> decode(vector<int>& encoded, int first) {

        vector<int> res;

        int temp= first;

        res.push_back(temp);

        for(int i=0; i<encoded.size(); i++){

            temp ^= encoded[i];

            res.push_back(temp);
        }
        
        return res;
    }
};