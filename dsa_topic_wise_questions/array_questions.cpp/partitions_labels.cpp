#include <bits/stdc++.h>
using namespace std;

vector<int> partition_labels(string s){
  vector<int> end_idx(50,0);
  for (int i = 0; i < s.length(); ++i){
    end_idx[s[i]- 'a'] = i;
  }
  vector<int> result;
  int prev = 0;
  int end = 0;
  for (int i = 0; i < s.length(); ++i){
    end = max(end, end_idx[s[i] - 'a']);
    if (i == end){
      result.push_back(i - prev + 1);
      prev = i + 1;
    }
  }
  return result;
}

void print_vector(vector<auto> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << " ";
   }
   cout << "]"<<endl;
}


int main(){
  char s[] = "abcdabadagiklikgkstuvyusv";
  print_vector(partition_labels(s));
  return 0;
}