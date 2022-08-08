
#define mod 1000000007

void solve(int a, int b, int m, vector<int> &res){

    res.push_back(b);

    if(res.size()-1 == m) return;

    solve(b%mod, (a+b)%mod, m, res);
}

int fiboSum(int n , int m){

    vector<int> res;

    res.push_back(0);

    if(m > 2){

        solve(0,1,m, res);
    }

    int ans = 0;

    for(int i=0; i<=m; i++){

        if(i >= n)
          
            ans = ((ans%mod )+ (res[i]%mod)) %mod;
    }
    return ans;
}