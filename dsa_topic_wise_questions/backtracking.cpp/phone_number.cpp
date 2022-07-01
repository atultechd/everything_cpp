#include <bits/stdc++.h>
using namespace std;

class solution{
pubilc:
  const vector<string> pad = {
    "", "", "abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
  };

  vector<string> lettercombination(string digits){
    if(digits.empty()) return {};
    vector<string> result;
    result.push_back("");

    for(auto digit: digits){
      vector<string> tmp;
      for(auto candidate: pad[digit-'0']){
        for(auto s: result){
          tmp.push_back(s + candidate);
        }
      }
      result.swap(tmp);
    }
    return result;
  }
};

//  logic for code.............