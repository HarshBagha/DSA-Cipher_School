#include<iostream>

using namespace std;

class TreeNode{
  public: 
  int data;
  TreeNode* right;
  TreeNode* left;

  TreeNode(int val){
    data = val;
    right = left = NULL;  

  }
};

int height(TreeNode* root){
  if(root==NULL) return 0; 
  int leftHeight = height(root->left); 
  int rightHeight = height(root-> right);

  return max(leftHeight, rightHeight) + 1;
  
}

int main() {
  TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right-> left = new TreeNode(6);
  root->right-> right = new TreeNode(7);

  cout<<"Height of the tree = "<<height(root);
  
  return 0;
}