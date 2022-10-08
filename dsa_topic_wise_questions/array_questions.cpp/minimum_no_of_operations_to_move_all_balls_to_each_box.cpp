class Solution {

public:

    vector<int> minOperations(string boxes) {

        vector<int> res;

        for(int i=0; i<boxes.size(); i++){

            int low = 0, high = boxes.size(), count = 0;

            while(low < i){

                if(boxes[low] == '1'){

                    count += (i - low);
                }

                low ++;
            }

            while(high > i){

                if(boxes[high] == '1'){

                    count += (high - i);
                }

                high --;
            }

            res.push_back(count);
        }
        
        return res;
    }
};