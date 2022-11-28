/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

public:

    int count_sum(TreeNode* root, int &maxcount, unordered_map<int,int> &m){

        if(!root) return 0;

        int sum = root->val;

        sum += count_sum(root->left,maxcount,m);

        sum += count_sum(root->right,maxcount,m);

        ++m[sum];

        maxcount = max(maxcount, m[sum]);

        return sum;
    }

    vector<int> findFrequentTreeSum(TreeNode* root) {

        int maxcount = 0;

        unordered_map<int,int> m;

        count_sum(root,maxcount,m);

        vector<int> res;

        for(auto &it : m){

            if(it.second == maxcount) res.push_back(it.first);
        }
        
        return res;
    }
};