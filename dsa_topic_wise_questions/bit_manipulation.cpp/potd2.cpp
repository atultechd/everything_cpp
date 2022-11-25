//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long ncr(long long n, long long r){
        if(n<r) return 0LL;
        else if(n==r || r==0) return 1;
        long long ans = 1;
        for(long long i = 0LL; i<r; i++){
            ans *= n-i;
            ans /= i+1;
        }
        return ans;
    }
    
    long long solve(long long x, long long setbits, long long i){
        if(i==0) return 0LL;
        long long mask = 1LL << i;
        long long ans = 0;
        if((x&mask) == 0){
            ans = solve(x,setbits,i-1);
        }
        else{
            long long res1 = solve(x,setbits-1,i-1);
            long long res2 = ncr(i,setbits);
            ans = res1+res2;
        }
        return ans;
    }
    
    long long csb(long long x){
        if(x==0) return 0;
        else return 1+ csb(x&(x-1));
    }
    
    long long count(long long x) {
        long long setbits = csb(x);
        long long ans = solve(x,setbits,63);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
  int t;
  cin >> t;
  while (t-- > 0) {
      long long x; cin >> x;
      Solution ob;
      cout << ob.count(x) << '\n';
  }
  return 0;
}
// } Driver Code Ends