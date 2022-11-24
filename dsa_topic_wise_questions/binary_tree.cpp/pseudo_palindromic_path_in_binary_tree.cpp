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

    int pseudoPalindromicPaths (TreeNode* root) {

        int ans = 0, count = 0;

        solve(root,ans,count);

        return ans;
    }
    
    void solve(TreeNode* root, int &ans, int count){

        if(!root) return;

        count ^= (1 << root->val);

        if(!root->left && !root->right){

            ans += (count & (count-1)) == 0;
        }

        solve(root->left, ans,count);
        
        solve(root->right,ans,count);
    }
};