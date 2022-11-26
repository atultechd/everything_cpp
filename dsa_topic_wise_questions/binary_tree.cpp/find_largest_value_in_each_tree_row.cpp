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

    vector<int> largestValues(TreeNode* root) {

        vector<int> res;

        if(!root) return res;

        vector<TreeNode*> q{root};

        while(!q.empty()){

            vector<TreeNode*> q1;

            auto max_at_level = INT_MIN;

            for(auto x : q){

                auto node = x->val;

                max_at_level = max(max_at_level, node);

                if(x->left) q1.push_back(x->left);

                if(x->right) q1.push_back(x->right);
            }

            res.push_back(max_at_level);
            
            swap(q,q1);
        }
        return res;
    }
};