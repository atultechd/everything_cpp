class Solution {

public:

    bool is_possible(vector<int>&position, int m, int mid){

        int balls_count = 1;

        int last_pos = position[0];

        for(int i=0; i<position.size(); i++){

            if(position[i]-last_pos >= mid){

                balls_count ++;

                if(balls_count == m) return true;

                last_pos = position[i];
            }
        }

        return false;
    }
    

    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int s=0;

        int maxi = -1;

        for(int i=0; i<position.size(); i++){

            maxi = max(maxi,position[i]);
        }

        int e = maxi;

        int res = -1;

        int mid = s + (e-s)/2;

        while(s <= e){

            if(is_possible(position,m,mid)){

                res = mid;

                s = mid + 1;
            }
            else{

                e = mid -1;
            }
            
            mid = s + (e-s)/2;
        }
        return res;
    }
};