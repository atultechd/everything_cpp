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

    TreeNode* solve(vector<int>& preorder, vector<int>& postorder,int &pre, int &post) {

        TreeNode* root = new TreeNode(preorder[pre++]);

        if(root->val != postorder[post]){

            root->left = solve(preorder,postorder,pre,post);
        }

        if(root->val != postorder[post]){

            root->right = solve(preorder,postorder,pre,post);
        }

        post++;

        return root;
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {

        int pre = 0, post = 0;
        
        return solve(preorder,postorder,pre,post);
    }
};