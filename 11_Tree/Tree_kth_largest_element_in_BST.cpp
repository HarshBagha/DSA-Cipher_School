// GFG PROBLEM: https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

// /*The Node structure is defined as
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */

// // return the Kth largest element in the given BST rooted at 'root'
// class Solution {
//   public:
//   int ans = -1; 
//   int count = 0;
//   void reversinginorder(Node* root, int k){
//       if(root==NULL) return;
      
//       reversinginorder(root->right, k);
//       count++;
      
//       if(count==k){
//           ans = root->data;
//           return;
//       }
//       reversinginorder(root->left, k);
      
//   }
  
//     int kthLargest(Node *root, int k) {
//         // Your code here
//         reversinginorder(root, k);
//         return ans;
        
//     }
// };



// Leetcode: 230
//   /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//         int count = 0;
//         int ans = -1;
        
//     void inorder(TreeNode* root, int k){

//         if(root ==NULL) return;
//         inorder(root->left, k);
//         // root previously we cout root but the catch is we count++
//         count++;
//         if(count == k){
//             ans = root->val;
//             return;
//         }
//         // right
//         inorder(root->right, k);


//     }

//     int kthSmallest(TreeNode* root, int k) {
//         inorder(root, k);
//         return ans;
//     }
// };