#include <bits/stdc++.h>

using namespace std;

int c[52];
int size;
long long table[52][252];
bool calculated[52][252];

long long solve(int i, int sum)
{
    if(sum<0) return 0;
    if(sum==0)return 1;
    if(i > size) return 0;
    if(calculated[i][sum] == false){ //eliminating overlap
        table[i][sum] = solve(i, sum - c[i]) + solve(i+1, sum);
        calculated[i][sum] = true;
    }
    return table[i][sum];
}
int main(){

    int sum;
    cin>>sum>>size;
    for(int i=1;i<=size;i++){
        cin>>c[i];
    }
    cout<<solve(1, sum)<<endl;
    return 0;
}