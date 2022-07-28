class Solution {

public:

    int minMoves(int target, int maxDoubles) {

        int count = 0;

        while(target > 1 && maxDoubles > 0){

            if(target % 2 == 0){

                target >>= 1;

                maxDoubles--;

            }else{

                target -= 1;
            }

            count++;
        }
        
        return target -1 + count;
    }
};