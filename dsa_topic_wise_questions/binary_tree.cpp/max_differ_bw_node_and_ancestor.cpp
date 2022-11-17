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

    int solve(TreeNode* root, int maxi, int mini){

        if(!root) return maxi - mini;

        else return max(solve(root->left,max(maxi,root->val),min(mini,root->val)),

        solve(root->right,max(maxi,root->val),min(mini,root->val)));
    }
    
    int maxAncestorDiff(TreeNode* root) {
      
        return solve(root,0,100000);
    }
};