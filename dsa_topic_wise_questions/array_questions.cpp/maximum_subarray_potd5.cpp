//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{

public:

  vector<int> findSubarray(int a[], int n) {

      int cursum = 0, maxsum = 0, start = 0, end = 0;

      int i = 0, j = 0;

      while(j<=n){

          if(j==n || a[j] < 0){

                if(cursum > maxsum){
                    maxsum = cursum;
                    start = i;
                    end = j-1;
                }

                i = j+1;
                cursum = 0;
                j++;
          }

          else{
              cursum += a[j];
              j++;
          }
      }
      if(start==end && a[start] < 0) return {-1};

      vector<int> res(a+start, a+end+1);

      return res;
  }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends