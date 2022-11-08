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

    int solve(TreeNode* root, int p, int gp){

        return root ? solve(root->left, root->val, p) + solve(root->right, root->val, p) 

            + (gp%2 == 0  ? root->val : 0 ) : 0;
    }
    

    int sumEvenGrandparent(TreeNode* root) {

        int p = 1, gp = 1;
        
        return solve(root, p, gp);
    }
};