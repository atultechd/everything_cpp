class Solution {

public:

    int minSteps(string s, string t) {

        int count = 0;

        unordered_map<char,int> mp;

        for(int i=0; i<s.size(); i++){

            mp[t[i]]++;
        }
        for(int i=0; i<s.size(); i++){

            if(mp.find(s[i]) == mp.end() || mp[s[i]] == 0){
              
                count ++;
            }
            else{
                mp[s[i]]--;
            }
        }
        return count;
    }
};