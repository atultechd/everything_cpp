
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v){
    cout << endl << "size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }
    cout << endl;
}

int main() {
   int N;
   cin >> N;
   // Declaring vector of vector and now both rows and columns are dynamic.
   vector<vector<int> v;
   for(int i=0; i<N; i++){
       int n;
       cin >> n;
       // creating a temp vector.
       vector<int> temp;
       for(int j=0; j<n; j++){
           int x;
           cin >> x;
           temp.push_back(x);
       }
       v.push_back(temp);
   }
   for(int i=0; i<N; i++){
       printvec(v[i]);
   }
   return 0;
}
    
// int main() {
//    int N;
//    cin >> N;
//    // Declaring vector array of arrays.
//    // This is just like matrix but with fixed rows and dynamic columns
//    vector<int>v[N];
//    for(int i=0; i<N; i++){
//        int n;
//        cin >> n;
//        for(int j=0; j<n; j++){
//            int x;
//            cin >> x;
//            v[i].push_back(x);
//        }
//    }
//    for(int i=0; i<N; i++){
//        printvec(v[i]);
//    }
//    return 0;
// }
