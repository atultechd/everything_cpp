int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int low = 0;

    int high = arr.size()-1;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid]==k) return mid;

        if(arr[0] <= arr[mid]){

            if(arr[0] <= k && arr[mid] > k)high = mid-1;

            else low = mid+1;

        }else{

            if(k <= arr[n-1] && arr[mid] < k) low = mid+1;
            
            else high = mid-1;
        }
    }
    return -1;
}

