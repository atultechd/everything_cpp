
//  Using 2D array.
class Solution {

public:

    int countVowelStrings(int n) {

        vector<vector<int>> t(n+1,vector<int>(6));

        for(int i=1; i<=n; i++){

            for(int j=1; j<=5; j++){

                t[i][j] = t[i][j-1] + (i>1 ? t[i-1][j] : 1);
            }
        }
        return t[n][5];
    }
};

// ................................................

// Using 1D array.
class Solution {

public:

  int countVowelStrings(int n){

    int t[] = {0,1,1,1,1,1};

    for(int i=1; i<=n; i++){

      for(int j=1; j<=5; j++){

        t[j] += t[j-1];
      }
    }

    return t[5];
  }

};