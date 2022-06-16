// class Solution {
// public:
//     int lh(TreeNode * root){
//         if(root==NULL){
//             return 0;
//         }
//         int h = lh(root->left);
//         return h+1;
        
//     }
//     int rh(TreeNode * root){
        
//         if(root==NULL){
//             return 0;
//         }
//         int h = rh(root->right);
//         return h+1;
        
//     }
//     int countNodes(TreeNode* root) {
        
//         if(root==NULL){
//             return 0;
//         }
//         int ht1 = lh(root);
//         int ht2 = rh(root);
//         if(ht1==ht2){
//             return (1<<ht1)-1;
//         }else{
            
//             int l = countNodes(root->left);
//             int r = countNodes(root->right);
//             return l+r+1;
            
//         }
        
        
        
//     }
// };