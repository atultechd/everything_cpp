long long int sumOrProduct(long long int n, long long int q){

    long long x = 1e9+7;

    if(q==1){

        return ((n*(n+1))/2) % x;

    }else{

        long long ans = 1;

        for(long long i=1; i<=n; i++){

            ans *= i;
            
            ans %= x;
        }
        return ans;
    }
}