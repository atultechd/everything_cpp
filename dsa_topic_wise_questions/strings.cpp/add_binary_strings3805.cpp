//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{

public: 

  string addBinary(string A, string B){

      string ans = "";

      reverse(A.begin(), A.end());

      reverse(B.begin(), B.end());

      int carry = 0, i=0, j=0;

      while(i<A.size() || j<B.size() || carry != 0){

          int val1 = (i<A.size()) ? A[i]-'0' : 0;

          int val2 = (j<B.size()) ? B[i]-'0' : 0;

          int sum = val1 + val2 + carry;

          if(sum%2) ans += '1';

          else ans+= '0';

          carry = sum/2;

          i++; j++;
      }

      while(ans.back() == '0') ans.pop_back();

      reverse(ans.begin(), ans.end());

      return ans;
  }
  
};

//{ Driver Code Starts.

int main()
{
  int t; cin >> t;
  while (t--)
  {
    string A, B; cin >> A >> B;
    Solution ob;
    cout << ob.addBinary (A, B);
    cout << "\n";
  }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends