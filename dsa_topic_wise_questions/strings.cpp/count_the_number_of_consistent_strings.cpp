class Solution {

public:

    int countConsistentStrings(string allowed, vector<string>& words) {

        int res = words.size();

        bool alphabet[26] = {false};

        for(char c : allowed){

            alphabet[c-'a'] = true;
        }
        
        for(auto word : words){

            for(auto c : word){

                if(alphabet[c-'a'] == false){

                    res--;
                    
                    break;
                }
            }
        }
        return res;
    }
};