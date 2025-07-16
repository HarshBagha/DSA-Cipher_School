// /**
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
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL || root-> val == val){
//             return root;
//         }
//         // IT'S A RECURSION APPROACH: 
//         // HERE we'll search on left as the value will be smaller than root. 
//         if(val<root-> val){
//             return searchBST(root-> left, val);
//         }
        
//         // HERE we'll search on right as the value will be larger than root. 
//         else{
//             return searchBST(root->right, val);
//         }
//     }
// };