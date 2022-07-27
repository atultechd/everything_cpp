class Solution {
public:
    
    int first_player_score(int s, int e, vector<int>& nums){

        if (s > e) return 0;

        if ( s == e) return nums[s];

        int cur_score = max(

            nums[s] + min(

                first_player_score(s+2,e,nums),
                first_player_score(s+1,e-1,nums)
            ),

            nums[e] + min(

                first_player_score(s+1,e-1,nums),
                first_player_score(s,e-2,nums)
            )
            
        );

        return cur_score;
    }
    

    int get_total_score(vector<int>& nums){

        int score_total = 0;

        for(auto it : nums){

            score_total += it;
        }
        return score_total;
    }
    

    bool PredictTheWinner(vector<int>& nums) {

        int score_player_one = first_player_score(0,nums.size()-1,nums);
        
        int total_score = get_total_score(nums);
        
        return score_player_one >= total_score - score_player_one;
    }
};