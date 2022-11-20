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
class BSTIterator {

    stack<TreeNode*> stk;

public:

    BSTIterator(TreeNode* root) {

       push_all(root); 
    }
    
    int next() {

        TreeNode *temp = stk.top();

        stk.pop();

        push_all(temp->right);

        return temp->val;
    }
    
    bool hasNext() {

        return !stk.empty();
    }

private:

    void push_all(TreeNode* root){
      
        for(;root != NULL; stk.push(root),root=root->left);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */