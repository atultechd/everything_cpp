#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *left, *right;
        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

class solution {
    public:
        node* insert(node* root, int data) {
            if(root == NULL) {
                return new node(data);
            } else {
                if(data <= root->data) {
                    root->left = insert(root->left, data);
                } else {
                    root->right = insert(root->right, data);
               }

               return root;
           }
        }


    int max(int a, int b){
        if (a > b) {
            return a;
        }else {
            return b;
        }
    }
    
    int height(node* root) {
        int lh = 0;
        int rh = 0;
        int count = 0;
        if (root==NULL) {
            return -1;
        }
        lh = 1+height(root->left);
        rh = 1+height(root->right);
        
        return max(lh, rh);
    }

}; 

int main() {
  
    solution myTree;
    node* root = NULL;
    
    int n;
    int data;

    cin >> n;

    while(n-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
    cout << height << endl;

    return 0;
}
