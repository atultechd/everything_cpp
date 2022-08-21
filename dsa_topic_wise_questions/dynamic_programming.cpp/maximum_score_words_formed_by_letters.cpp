class Solution {

public:

    int solve(vector<string>& words, vector<int>& score, vector<int> &cnt, int idx){

        if(idx >= words.size()) return 0;

        auto skipgain = solve(words,score,cnt,idx+1), gain = 0, formed = 1;

        vector<int> cnt1(begin(cnt), end(cnt));

        for(auto c : words[idx]){

            if(--cnt1[c-'a'] < 0) formed = 0;

            gain += score[c-'a'];
        }
        return max(skipgain, formed ? gain + solve(words,score,cnt1,idx+1) : 0);
    }

    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {

        vector<int> cnt(26);

        for(auto c : letters) ++cnt[c-'a'];
          
        return solve(words,score,cnt,0);
        
    }
};