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

    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;

        if(!root) return res;

        queue<TreeNode*> que;

        que.push(root);

        vector<int> v;

        queue<TreeNode*> que1;

        while(!que.empty()){

            TreeNode* temp = que.front();

            que.pop();

            v.push_back(temp->val);

            if(temp->left) que1.push(temp->left);

            if(temp->right) que1.push(temp->right);

            if(que.empty()){

                swap(que,que1);

                res.push_back(v);
                
                v.clear();
            }
        }
        return res;
    }
};