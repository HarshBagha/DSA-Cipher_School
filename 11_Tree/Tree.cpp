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

void preorder(TreeNode* root){
  // Root | Left | Right
  if(root == NULL) return;

  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

// Inorder: 
void Inorder(TreeNode* root){
  // Left | Root | Right
  if(root == NULL) return;

  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

// Post-Order: 
void Postorder(TreeNode* root){
  
  if(root==NULL) return;

  Postorder(root->left);
  Postorder(root->right);
  cout<<root->data<<" ";

}

int main() {
  TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right-> left = new TreeNode(6);
  root->right-> right = new TreeNode(7);

  preorder(root); 
  cout<<endl;
  Inorder(root);
  cout<<endl;
  Postorder(root);
  
  return 0;
}