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

    void solve(TreeNode* &root, set<int> &s, vector<TreeNode*> &res){

        if(!root) return;

        solve(root->left,s,res);

        solve(root->right,s,res);

        if(s.find(root->val) != s.end()){

            if(root->left) res.push_back(root->left);

            if(root->right) res.push_back(root->right);

            root = NULL;

            delete root;
        }
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {

        set<int> s;

        for(int i=0; i<to_delete.size(); i++){

            s.insert(to_delete[i]);
        }

        vector<TreeNode*> res;

        solve(root,s,res);

        if(root) res.push_back(root);
        
        return res;
    }
};