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
class CBTInserter {

public:

    TreeNode* node = NULL;

    CBTInserter(TreeNode* root) {

        node = root;
    }
    
    int insert(int val) {

        queue<TreeNode*> que;

        TreeNode* cur = NULL;

        que.emplace(node);

        while(!que.empty()){

            cur = que.front();

            que.pop();

            if(!cur->left){

                cur->left = new TreeNode(val);

                break;
            }

            if(!cur->right){

                cur->right = new TreeNode(val);

                break;
            }

            if(cur->left) que.emplace(cur->left);

            if(cur->right) que.emplace(cur->right);
        }
        
        return cur->val;
    }
    
    TreeNode* get_root() {
      
        return node;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */