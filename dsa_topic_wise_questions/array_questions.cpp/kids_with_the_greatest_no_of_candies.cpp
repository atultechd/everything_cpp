class Solution {

public:

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans(candies.size());

        for(int i=0; i<candies.size(); i++){

            int x = candies[i]; 

            candies[i] = candies[i] + extraCandies;

            int temp = * max_element(candies.begin(), candies.end());

            if(temp <= candies[i]) ans[i] = 1;
            
            candies[i] = x;
        }
        return ans;
    }
};