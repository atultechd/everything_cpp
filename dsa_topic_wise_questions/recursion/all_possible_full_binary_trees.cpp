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

// ............The comment part is memoization.......................
class Solution {

public:

    // unordered_map<int, vector<TreeNode *>> m;

    vector<TreeNode *> allPossibleFBT(int n){

        vector<TreeNode*> ans;

        // if(n<1 || n%2==0) return ans;

        // if(m.find(n) != m.end()) return m[n];

        if(n==1){

            ans.push_back(new TreeNode(0));

            // m[1] = ans;

            return ans;
        }
            
        for(int i=1; i<n; i+=2){

            vector<TreeNode*> left = allPossibleFBT(i); 

            vector<TreeNode*> right = allPossibleFBT(n-i-1);

            for (int j = 0; j < left.size(); j++) {

                for (int k = 0; k < right.size(); k++) {

                    TreeNode *root = new TreeNode(0);

                    root->left = left[j];

                    root->right = right[k];
                    
                    ans.push_back(root);
                }
            }
        }
        // m[n] = ans;
        return ans;
    }
    
};