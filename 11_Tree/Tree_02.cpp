#include<iostream>

using namespace std;

class TreeNode{
  public:
  int data;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val){
    data = val;
    left = right = NULL;

  }
};
int countNodes(TreeNode* root){
  if(root==NULL) return 0;
  return 1 + countNodes(root->left) + countNodes(root->right);
}



int main() {

  TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right-> left = new TreeNode(6);
  root->right-> right = new TreeNode(7);

  cout<<"Printing how many nodes are present =  "<<countNodes(root);

  return 0;
}