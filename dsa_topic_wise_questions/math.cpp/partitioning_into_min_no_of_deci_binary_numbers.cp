class Solution {

public:

    int minPartitions(string n) {
      
     // The maxium value of n[index] is the valid ans.. 

        return *max_element(n.begin(), n.end()) - '0';
    }
};