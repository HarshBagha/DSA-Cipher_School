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
int countleaf(TreeNode* root){
  if(root==NULL) return 0;
  
  if(!root->left && !root->right ){
    return 1;
  }
  
  return countleaf(root->left) + countleaf(root->right);

}


int main() {
  TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right-> left = new TreeNode(6);
  root->right-> right = new TreeNode(7);
  
  cout<<"Number of leaf node: "<<countleaf(root);

  return 0;
}