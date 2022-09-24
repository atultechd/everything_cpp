class Solution {

public:

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> res(candies.size());

        for(int i=0; i<candies.size(); i++){

            int x = candies[i]; 

            candies[i] = candies[i] + extraCandies;

            int temp = * max_element(candies.begin(), candies.end());

            if(temp <= candies[i]) res[i] = 1;
            
            candies[i] = x;
        }
        return res;
    }
};