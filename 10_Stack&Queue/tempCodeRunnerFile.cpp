#include<iostream>

using namespace std;

// MAKING OF THE TREE: 

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

int main() {
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->right->right = new TreeNode(5);


  
  return 0;
}