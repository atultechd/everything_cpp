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

    int maxLevelSum(TreeNode* root) {

        vector<TreeNode*> q{root};

        int level = 0, maxsum_level = 0, maxsum = INT_MIN;

        while(!q.empty()){

            vector<TreeNode*> q1;

            int sum = 0;

            ++level;

            for(auto x : q){

                sum += x->val;

                if(x->left) q1.push_back(x->left);

                if(x->right) q1.push_back(x->right);
            }

            maxsum_level = sum > maxsum ? level : maxsum_level;

            maxsum = max(maxsum, sum);
            
            swap(q,q1);
        }
        return maxsum_level;
    }
};