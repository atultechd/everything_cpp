class Solution {

public:

    int wateringPlants(vector<int>& plants, int capacity) {

        int steps = 0, duplicate_capacity = capacity;

        int i=0;

        while(i < plants.size()){

            if(capacity < plants[i]){

                steps += 2 * i;

                capacity = duplicate_capacity;

                continue;
            }

            else{

                capacity = capacity - plants[i];

                if(i < plants.size()) steps++;
                
                i++;
            }
        }
        return steps;
    }
};