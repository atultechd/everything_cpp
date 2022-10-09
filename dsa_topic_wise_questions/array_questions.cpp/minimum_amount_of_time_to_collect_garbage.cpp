class Solution {

public:

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int metal = 0, paper = 0, glass = 0;

        int res =0;

        for(int i=0; i<garbage.size(); i++){

            for(auto c : garbage[i]){

                res++;

                if(c == 'M') metal = i;

                else if(c == 'P') paper = i;

                else glass = i;
            }
        }
        
        for(int i=1; i<travel.size(); i++){
          
            travel[i] += travel[i-1];
        }
        
        if(metal > 0) res += travel[metal-1];
        if(paper > 0) res += travel[paper-1];
        if(glass > 0) res += travel[glass-1];
        
        return res;
        
    }
};