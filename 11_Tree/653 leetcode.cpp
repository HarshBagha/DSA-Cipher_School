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
  //     void inorder(TreeNode* root, vector<int>& values ){

  //         if(root==NULL) return;
  //         // tranversing in the left as inorder function 
  //         inorder(root->left, values);

  //         // using this to push the values in the created vector
  //         values.push_back(root->val);     

  //         //traversing in right of the inorder
  //         inorder(root->right, values);

  //     }
  //     bool findTarget(TreeNode* root, int k) {
  //         vector<int> values;
  //         inorder(root, values);
  //         // Now doing the 2 sum 

  //         int left = 0;
  //         int right = values.size()-1;

  //         while(left<right){       // don't equate right = left.
  //             int sum = values[left] + values[right];
  //             if(sum == k) return true;
  //             else if(sum<k) left++;
  //             else right--;
  //         }
  //         return false;
          
  //     }
  // };