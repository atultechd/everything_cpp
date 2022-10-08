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

class Solution {

public:

    vector<int> minOperations(string boxes) {

        vector<int> res(boxes.size());

        // from left to right;
        for(int i=0,count=0,operations=0; i<boxes.size(); i++){

            res[i] += operations;

            count += boxes[i] == '1' ? 1 : 0;

            operations +=  count;
        }

        // from right to left;
        for(int i=boxes.size()-1,count=0,operations=0; i>=0; i--){

            res[i] += operations;

            count += boxes[i] == '1' ? 1 : 0;
            
            operations +=  count;
        }
        return res;
    }
};