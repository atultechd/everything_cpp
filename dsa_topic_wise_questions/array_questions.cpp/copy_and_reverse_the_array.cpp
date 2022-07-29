
vector<int> copyAndReverse(vector<int> arr, int n) {

    vector<int> res(n,-1);

    int j=0;

    for(int i=n-1; i>=0; i--){

        res[j++] = arr[i];
    }
    
    return res;
} 