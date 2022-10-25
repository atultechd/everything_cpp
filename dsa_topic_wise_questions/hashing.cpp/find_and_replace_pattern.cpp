class Solution {

public:

    vector<int> pattern_found(string pattern){

        vector<int> res;

        if(pattern == " "){

            return {};
        }

        int ind = 0;

        unordered_map<char,int> u_map;

        for(int i=0; i<pattern.size(); i++){

            if(u_map.find(pattern[i]) == u_map.end()){

                u_map.insert({pattern[i], ind++});

                res.push_back(u_map[pattern[i]]);
            }
            else{
                res.push_back(u_map[pattern[i]]);
            }
        }
        return res;
    }
    

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<int> v = pattern_found(pattern);

        vector<string> ans;

        for(int i=0; i<words.size(); i++){

            if(v == pattern_found(words[i])){
              
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};