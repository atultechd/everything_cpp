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
    
    void solve(TreeNode* &root, int maxi, int &count){

        if(!root)return;

        solve(root->left, max(maxi,root->val), count);

        solve(root->right, max(maxi,root->val), count);

        if(root->val >= maxi) count++;
    }
    
    int goodNodes(TreeNode* root) {

        if(!root) return 0;

        int count = 0;

        solve(root,max(-10000, root->val), count);
        
        return count;
    }
};