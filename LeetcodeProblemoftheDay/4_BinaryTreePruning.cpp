// class Solution {
// public:
//     TreeNode *  pruneTreeHelper(TreeNode * root){
//         if(root==NULL){
//             return NULL;
//         }
//         root->left  = pruneTreeHelper(root->left);
//         root->right = pruneTreeHelper(root->right);    
//         if(root->val == 0 && root->left==NULL && root->right==NULL){
//             return NULL;
//         }
//         return root;
//     }
//     TreeNode* pruneTree(TreeNode* root) {
//         if(root==NULL){
//             return root;
//         }
//         return pruneTreeHelper(root);
//     }
// };