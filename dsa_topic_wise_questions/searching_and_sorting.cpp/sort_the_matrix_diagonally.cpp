class Solution {

public:

    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> pq_m;

        int m = mat.size(), n = mat[0].size();

        for(int i=0; i<m; i++){

            for(int j=0; j<n; j++){

                pq_m[i-j].push(mat[i][j]);
            }
        }
        
        for(int i=0; i<m; i++){

            for(int j=0; j<n; j++){

                mat[i][j] = pq_m[i-j].top();

                pq_m[i-j].pop();
            }
        }
        return mat;
    }
};