#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  unordered_set<int>set;
  for(int &element : arr){
    set.insert(element);
  }

  cout << set.size() << endl;
  return 0;
}