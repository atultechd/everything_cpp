class Solution {

public:

    int numJewelsInStones(string jewels, string stones) {

        unordered_map<char,int> u_map;

        for(int i=0; i<jewels.size(); i++){

            u_map[jewels[i]]++;
        }
        int count = 0;

        for(auto it : stones){

            if(u_map.find(it) != u_map.end()) count++;
        }
        return count;
    }
};

// ..................................................................

class Solution {

public:

    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> u_set(jewels.begin(), jewels.end());

        int count = 0;

        for(auto it : stones){
          
            if(u_set.count(it)) count++;
        }
        return count;
    }
};