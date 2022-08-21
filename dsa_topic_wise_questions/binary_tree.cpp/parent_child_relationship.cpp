#include<bits/stdc++.h>
using namespace std;

struct node{

  int data;

  struct node *left;

  struct node *right;

};

struct node *newNode(int _data){

   struct node *root = (struct node *)malloc(sizeof(struct node));

   root->data = _data;

   root->left = NULL;

   root->right = NULL;

   return root;
}

int count_relation(node *root, int &count){

    if(root->left==NULL || root->right==NULL) return 0;

    if(root->left->data == root->data +1 || root->left->data == root->data -1) count++;

    if(root->right->data == root->data +1 || root->right->data == root->data -1) count++;

    int a = count_relation(root->left, count);

    int b = count_relation(root->right, count);

    return count;
}

int main() {

    struct node *root = newNode(1);

    root->left = newNode(2);

    root->right = newNode(3);

    root->right->left = newNode(4);

    root->right->right = newNode(5);

    root->right->right->left = newNode(6);

    root->right->right->right = newNode(7);

    int count = 0;

    int a = count_relation(root,count);

    cout << a << endl;
    
    return 0;
}