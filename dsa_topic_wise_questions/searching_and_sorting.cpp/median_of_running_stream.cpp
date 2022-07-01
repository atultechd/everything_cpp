#include <bits/stdc++.h>
using namespace std;

void find_median(int nums[], int n){
  priority_queue<double> s;
  priority_queue<double, vector<double>, greater<double>> g;

  double med = nums[0];
  s.push(nums[0]);
  cout << med << endl;
  for (int i = 1; i < n; ++i){
    double x = nums[i];
    if (s.size() > g.size()){
      if (x < med){
        g.push(s.top());
        s.pop();
        s.push(x);
      }
      else{
        g.push(x);
      }
      med = (s.top()+g.top())/2.0;
    }
    else if (s.size()==g.size()){
      if (x < med){
        s.push(x);
        med = (double)s.top();
      }
      else{
        g.push(x);
        med = (double)g.top();
      }
    }
    else{
      if (x > med){
        s.push(g.top());
        g.pop();
        g.push(x);
      }
      else{
        s.push(x);
      }
      med = (s.top()+g.top())/2.0;
    }
    cout << med << endl;
  }
}

int main(){
  int n = 5;
  int nums[] = {3,1,2,6,4};
  find_median(nums, n);
  return 0;
}