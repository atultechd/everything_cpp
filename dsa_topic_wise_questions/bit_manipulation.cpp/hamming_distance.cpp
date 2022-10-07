class Solution {

public:

    int hammingDistance(int x, int y) {

        int h_distance = 0;

        int a = x^y;

        while(a > 0){

            a = a & (a-1);
            
            h_distance++;
        }
        return h_distance;
    }
};