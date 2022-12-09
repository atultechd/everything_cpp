//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int n, int m){

    int dx[] = {-1,-2,-2,-1,1,2,2,1};

    int dy[] = {-2,-1,1,2,2,1,-1,-2};

    long mod = 1e9+7, result = 0;

    long total = ((n*m)%mod * (n*m-1)%mod)%mod;

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            for(int k = 0; k<8; k++){

                int nx = i+dx[k];

                int ny = j+dy[k];
                
                if(nx>=0 && nx<n && ny>=0 && ny<m) result++;
            }
        }   
    }
    return (total%mod -result%mod)%mod;
}