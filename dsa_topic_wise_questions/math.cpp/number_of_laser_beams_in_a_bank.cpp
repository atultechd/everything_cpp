class Solution {

public:

    int numberOfBeams(vector<string>& bank) {

        int prev = 0, count = 0, ans = 0;

        for(auto s : bank){

            count = 0;

            for(int i=0; i<s.size(); i++){

                if(s[i] == '1') count ++;
            }

            if(count){
                ans += prev * count;
                prev = count;
            }
        }
        
        return ans;
    }
};