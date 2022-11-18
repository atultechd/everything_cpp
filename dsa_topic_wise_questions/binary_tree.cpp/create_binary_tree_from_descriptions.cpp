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

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_map<int,TreeNode*>for_node;

        unordered_map<int,bool> is_child;

        for(auto &x : descriptions){

            if(for_node.count(x[0])==0){

                TreeNode* parent = new TreeNode(x[0]);

                for_node[x[0]] = parent;
            }

            if(for_node.count(x[1])==0){

                TreeNode* child = new TreeNode(x[1]);

                for_node[x[1]] = child;
            }

            if(x[2]==1) for_node[x[0]]->left = for_node[x[1]];

            else for_node[x[0]]->right = for_node[x[1]];

            is_child[x[1]] = true;
        }

        TreeNode* root = NULL;

        for(auto &x : descriptions){

            if(is_child[x[0]] != true){

                root = for_node[x[0]];
                
                break;
            }
        }
        return root;
    }
};