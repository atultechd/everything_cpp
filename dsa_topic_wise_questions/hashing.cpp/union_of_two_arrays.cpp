#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
  int m,n;
  cin >> m;
  cin >> n;

  int arr01[m];
  int arr02[n]; 

  for (int i = 0; i < m; ++i){
    cin >> arr01[i];
  }
  for (int i = 0; i < n; ++i){
    cin >> arr02[i];
  }

  unordered_set<int>set;
  
  for(int &element : arr01){
    set.insert(element);
  }
  for(int &element : arr02){
    set.insert(element);
  }

  cout << set.size() << endl;
  return 0;
}

