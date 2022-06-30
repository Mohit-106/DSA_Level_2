//When left node connect with child node and right node is NULL
// class Solution {
// public:
//     TreeNode * temp =NULL;
//     void flatten(TreeNode* root) {
//         if(root){
//             if(temp!=NULL){
//                 temp->right=root;
//             }
//             temp=root;
//             flatten(root->left);
//             flatten(root->right);        
//             root->right = NULL;           
//         }     
//     }
// };


//when left == NULL and right is connect with child
// class Solution {
// public:
//     TreeNode * temp =NULL;
//     void flatten(TreeNode* root) {
//         if(root){
//             TreeNode * right = root->right;  //ned to preserve the right and left calls
//             TreeNode * left = root->left;
//             if(temp!=NULL){
//                 temp->right=root;
//                 temp->left = NULL;
//             }
//             temp=root;
//             flatten(root->left);
//             flatten(right);          
//         }     
//     }
// };

