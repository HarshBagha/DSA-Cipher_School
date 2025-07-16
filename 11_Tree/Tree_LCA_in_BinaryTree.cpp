// /* A binary tree node

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
//  */

// class Solution {
//   public:
//     // Function to return the lowest common ancestor in a Binary Tree.
//     Node* lca(Node* root, int n1, int n2) {
//         // Your code here
//         // BASE CASE 1: 
        
//         if(root==NULL) return NULL;
//         // BASE CASE 2: 
        
//         if(root->data== n1 || root -> data == n2) return root;
        
//         // 
//         Node* Leftans = lca(root->left, n1, n2);
//         Node* Rightans = lca(root->right, n1, n2);
//         // here we are checking if both are not null at the starting return the root.
//         if(Leftans!= NULL && Rightans != NULL){
//             return root;
//         }
//         // after finding one of the element from either side we will return that through these 2 code
        
//         else if(Leftans != NULL && Rightans == NULL){
//             return Leftans;
//         }
//         else if(Leftans == NULL && Rightans!= NULL){
//             return Rightans;
            
//         }
//         else{
//             return NULL;
//         }
   
//     }
// };