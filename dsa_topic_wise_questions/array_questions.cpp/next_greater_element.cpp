class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        vector<long long> ans(n);
        stack<long long> stk;
        for(int i=n-1; i>=0; i--){
            while(stk.size()>0 && stk.top()<=arr[i]){
                stk.pop();
            }
            if(stk.size() ==0) ans[i] = -1;
            else ans[i] = stk.top();
            stk.push(arr[i]);
        }
        return ans;
    }
};