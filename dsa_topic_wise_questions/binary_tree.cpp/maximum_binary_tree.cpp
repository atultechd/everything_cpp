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
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        vector<TreeNode *> node;

        for(int i=0; i<nums.size(); i++){

            TreeNode *root = new TreeNode(nums[i]);

            while(!node.empty() && node.back()->val < nums[i]){

                root->left = node.back();

                node.pop_back();

            }

            if(!node.empty()){

                node.back()->right = root;

            }

            node.push_back(root);
        }
        return node.front();
    }
};