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

    pair<int, TreeNode*> solveDepth(TreeNode* root){

        if(!root) return {0,NULL};

        pair<int, TreeNode*> left = solveDepth(root->left), right = solveDepth(root->right);

        int d1 = left.first, d2 = right.first;

        return {max(d1,d2)+1, d1==d2 ? root : d1 > d2 ? left.second : right.second};
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
      
        return solveDepth(root).second;
    }
};