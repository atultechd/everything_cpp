// Codeforces round 818 div2
// 1717

#include <bits/stdc++.h>
using namespace std;

// long gcd(int a, int b){

//     int maxi = max(a,b);

//     long greatest_c_d = 1;

//     for(long i=1; i<=maxi; i++){

//         if(a % i == 0 && b % i == 0){

//             greatest_c_d = max(greatest_c_d, i);

//         }
//     }
//     return greatest_c_d;
// }


// long lcm(int a, int b){

//     long x = a * b;

//     int maxi = max(a,b);

//     long least_c_m = a * b;

//     for(long i=x; i>=maxi; i--){

//         if(i % a == 0 && i % b == 0){

//             least_c_m = min(least_c_m, i);
//         }
//     }
//     return least_c_m;
// }

long long gcd(long long int a,long long int b){

  if (b == 0) return a;

  return gcd(b, a % b);
}

long long lcm(int a, int b){

    return (a / gcd(a, b)) * b;
}


int main() {

    int t;

    cin >> t;

    while(t--){

        int n;

        cin >> n;

        int count =0;

        for(int i=1; i<=n; i++){

            for(int j=1; j<=n; j++){

                if(lcm(i,j)/gcd(i,j) <= 3) count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}