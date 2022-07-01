#include <bits/stdc++.h>
using namespace std;

template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

vector<string> binary_watch_possible_time(int num){
  vector<string> res;
  for (int h = 0; h < 12; ++h){
    for (int m = 0; m < 60; ++m){
      if (bitset<10>(h << 6 | m).count() == num){
        res.emplace_back(to_string(h) + ((m < 10)? ":0" : ":") + to_string(m));
      }
    }
  }
  return res;
}

int main(){
  cout << binary_watch_possible_time(1) << endl;
  return 0;
}

