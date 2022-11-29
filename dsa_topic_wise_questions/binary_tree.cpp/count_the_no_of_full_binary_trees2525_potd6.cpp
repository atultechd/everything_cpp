//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    long long int numoffbt(long long int arr[], int n){

        const long long int mod = 1000000007;

        long long int mn = INT_MAX, mx = INT_MIN;

        for(int i=0; i<n; i++){

            mn = (mn > arr[i]) ? arr[i] : mn;

            mx = (mx < arr[i]) ? arr[i] : mx;
        }

        int prod;

        long long int ans = 0;

        vector<bool> vis(mx+1, false);

        vector<long long int> res(mx+1,0);

        for(int i=0; i<n; i++){

            vis[arr[i]] = 1;

            res[arr[i]] = 1;
        }

        for(int i = mn; i<= mx; i++){

            if(!vis[i]) continue;

            for(int j=2; i*j <= mx && j<=i; j++){

                prod = i*j;

                if(!vis[prod]) continue;

                res[prod] = (res[prod] + (res[i]*res[j])%mod)%mod;
                
                if(i!=j) res[prod] = (res[prod] + (res[i]*res[j])%mod)%mod;
            }
            ans = (ans+res[i])%mod;
        }
        return ans;
        
    }
    
};


//{ Driver Code Starts.

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    Solution ob;
    cout<<ob.numoffbt(a,n)<<endl;
    
  }
  return 0;
}


// } Driver Code Ends