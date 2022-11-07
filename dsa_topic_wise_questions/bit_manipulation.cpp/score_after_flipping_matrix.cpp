class Solution {

public:

    int matrixScore(vector<vector<int>>& grid) {

        int row = grid.size();

        int col = grid[0].size();

        for(int i=0; i<row; i++){

            if(grid[i][0] == 0){

                for(int j=0; j<col; j++){

                    grid[i][j] ^= 1;
                }
            }
        }
        
        for(int i=1; i<col; i++){

            int count = 0;

            for(int j=0; j<row; j++){

                count += grid[j][i];
            }
            
            if(count <= (row>>1)){

                for(int j=0; j<row; j++){

                    grid[j][i] ^= 1;
                }
            }
        }

        int res = 0, binary = 1;

        for(int i=col-1; i>=0; i--){

            for(int j=0; j<row; j++){
                
                res += grid[j][i] * binary;
            }
            binary = (binary<<1);
        }
        return res;
    }
};