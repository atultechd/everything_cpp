class Solution {

public:

    int peakIndexInMountainArray(vector<int>& arr) {

        unordered_map<int,int> u_map;

        int maxi = 0;

        for(int  i=0; i<arr.size(); i++){

            u_map[arr[i]] = i;

            maxi = max(maxi, arr[i]);
        }
        return u_map[maxi];
    }
};

// .........................................................


class Solution {

public:

    int peakIndexInMountainArray(vector<int>& arr) {

        int low = 0;

        int high = arr.size()-1;

        while(low<high){

            int mid = (low+high )/2;

            if(arr[mid] < arr[mid+1]){

                low = mid+1;
            }
            else high = mid;
        }
        return low;
    }
    
};


// .......................................................


class Solution {

public:

    int peakIndexInMountainArray(vector<int>& arr) {

        auto a = max_element(arr.begin(), arr.end());
        
        return a - arr.begin();
    }
    
};