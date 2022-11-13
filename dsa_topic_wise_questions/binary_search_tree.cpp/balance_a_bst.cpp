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

    void find_inorder(TreeNode* root, vector<TreeNode*> &inorder){

        if(!root) return;

        find_inorder(root->left,inorder);

        inorder.push_back(root);

        find_inorder(root->right,inorder);
    }

    TreeNode* buildbst(int s,int e, vector<TreeNode*> &inorder){

        if(s>e) return NULL;

        int mid = (s+e)/2;

        TreeNode *root = inorder[mid];

        root->left = buildbst(s,mid-1,inorder);

        root->right = buildbst(mid+1,e,inorder);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {

        if(!root) return NULL;

        vector<TreeNode*> inorder;

        find_inorder(root,inorder);

        int n = inorder.size();
        
        return buildbst(0,n-1,inorder);;
    }
};