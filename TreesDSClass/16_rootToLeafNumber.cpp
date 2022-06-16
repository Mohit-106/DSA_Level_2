// https://leetcode.com/problems/sum-root-to-leaf-numbers/submissions/

//  class Solution {
// public:
//     int sum = 0;
//     void helper(TreeNode* root , int val){

//         val=val*10+root->val;
//         if(root->left!=NULL){
//             helper(root->left,val);
//         }
//         if(root->right!=NULL){
//              helper(root->right,val);
//         }
//         if(root->left==NULL && root->right==NULL){
//              sum+=val;
//         }

//     }
//     int sumNumbers(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }

//         helper(root,0);
//         return sum;

//     }
// };
