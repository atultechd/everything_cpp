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

    void solve(TreeNode* root1, TreeNode* root2, int count){

        if(!root1 && !root2) return;

        if(count%2 == 1) swap(root1->val, root2->val);

        count++;

        solve(root1->left, root2->right, count);

        solve(root1->right, root2->left, count);
    }
    
    
    TreeNode* reverseOddLevels(TreeNode* root) {

        int count = 1;

        solve(root->left, root->right, count);

        return root;
    }
};