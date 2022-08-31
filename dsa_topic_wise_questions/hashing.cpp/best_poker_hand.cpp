class Solution {

public:

    string bestHand(vector<int>& ranks, vector<char>& suits) {

        unordered_map<char,int> u_map;

        unordered_map<char,int> ranks_map;
        
        for(int i=0; i<suits.size(); i++){

            u_map[suits[i]]++;

            ranks_map[ranks[i]]++;
        }
        int count = 0, count2 = 0;

        for(auto x : u_map){

            count = max(count, x.second);
        }
        for(auto x : ranks_map){

            count2 = max(count2, x.second);
        }
        if(count == 5) return "Flush";

        if(count2 == 4 || count2 == 3) return "Three of a Kind";

        if(count2 == 2) return "Pair";
        
        return "High Card";
    }
};