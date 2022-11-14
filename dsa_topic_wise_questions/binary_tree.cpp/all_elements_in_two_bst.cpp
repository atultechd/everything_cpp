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

    void solve(TreeNode* root, vector<int> &res){

        if(!root) return;

        solve(root->left,res);

        res.push_back(root->val);

        solve(root->right,res);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        vector<int> res;

        if(!root1 && !root2) return res;

        solve(root1,res);

        solve(root2,res);

        sort(res.begin(), res.end());
        
        return res;
    }
};