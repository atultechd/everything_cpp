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

    void solve(TreeNode* root, int k, int &i, int &ans){

        if(!root) return;

        solve(root->left,k,i,ans);

        if(k == i){

            ans = root->val;

            i = 10000;
        }

        i++;

        solve(root->right,k,i,ans);
    }
    
    int kthSmallest(TreeNode* root, int k) {

        if(!root) return 0;

        int i=1,ans = 0;

        solve(root,k,i,ans);

        return ans;
    }
};