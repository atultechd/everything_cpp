// C++ solution

class Solution {

public:

    int maxCoins(vector<int>& piles) {

        sort(piles.begin(), piles.end(), greater<int>());

        int n = piles.size();

        int count = 0;

        for(int i=0 ;i<n-(n/3); i++){

            if(i%2 == 1) count += piles[i];
        }
        return count;
    }
};

// ..............................................................

// Java solution

class Solution {

    public int maxCoins(int[] piles) {

        Arrays.sort(piles);

        int n = piles.length, count = 0;

        for(int i=n/3; i<n; i+=2){

            count += piles[i];
        }
        return count;
    }
}