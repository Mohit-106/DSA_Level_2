// class Solution {
// public:
//     TreeNode * prev = NULL;
//     bool isValidBST(TreeNode* root) {
//         if(root==NULL){
//             return true;
//         }
//         bool leftcheck = isValidBST(root->left);
//         if(leftcheck == false){
//             return false;
//         }  
//         if(prev==NULL){
//             prev = root;
//         }else{
//             if(prev->val >=  root->val){
//                 return false;
//             }
//             prev = root;
//         }
//         bool rightcheck = isValidBST(root->right);
//         if(rightcheck == false){
//             return false;
//         }  
//         return true;
//     }
// };

// Same can be done by moris traversal as well