//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    
    vector<int> threeDivisors(vector<long long> query, int q){
        long long maxi = 0;
        for(auto i: query){
            if(maxi < i) maxi = i;
        }
        vector<int> primeno(maxi,1);
        vector<int> primeno_sum(maxi,-1);
        primeno[0] = primeno[1] = -1;
        for(int i=2; i<maxi; i++){
            if(primeno[i] == 1){
                int j = i*2;
                while(j<maxi){
                    primeno[j] = -1;
                    j+=i;
                }
            }
        }
        int pre = 0;
        for(int i=0; i<maxi; i++){
            if(primeno[i] == 1) pre++;
            primeno_sum[i] = pre;
        }
        vector<int> res;
        for(int i=0; i<q; i++){
            long long int num = query[i];
            long long int sq_root = num/2;
            while(sq_root>0){
                if(sq_root * sq_root <= num) break;
                sq_root--;
            }
            int ans = primeno_sum[sq_root];
            res.push_back(ans);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends