#include <iostream>
using namespace std;

struct node{
  int data;
  struct node *left , *right;
  node(int data){
    this->data = data;
    left = right = NULL;
  }

};

void inorder(struct node *root){
  if (root == NULL){
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(struct node *root){
  if (root == NULL){
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(struct node *root){
  if (root == NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

int main(){
  struct node *root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;
  postorder(root);
  cout << endl;
  
  return 0;
}