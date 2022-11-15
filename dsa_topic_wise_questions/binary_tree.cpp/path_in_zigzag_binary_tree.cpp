class Solution {

public:

    vector<int> pathInZigZagTree(int label) {

        int count = 1,temp = 1;

        vector<int> res;

        while(temp*2 <= label){

            temp = temp * 2;

            count ++;
        }

        while(label >= 1){

            res.push_back(label);

            int max = pow(2,count)-1;

            int min = pow(2,count-1);

            label = (max+min-label)/2;

            count --;
        }

        sort(res.begin(), res.end());
        
        return res;
    }
};