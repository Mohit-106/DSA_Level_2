// class Solution {
// public:
//      int leftmax(TreeNode * node){
        
//         while(node->right!=NULL){
//             node=node->right;
//         }
//         return node->val;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==NULL){
//             return root;
//         }
        
//         if(root->val<key){
            
//             root->right = deleteNode(root->right,key);
//             return root;
            
//         }else if(root->val>key){
            
//             root->left = deleteNode(root->left,key);
//             return root;
        
//         }else{
//             if(root->left !=NULL && root->right!=NULL){
                
//                 int lmax = leftmax(root->left);
//                 root->val = lmax;
//                 root->left =  deleteNode(root->left,lmax);
                
//                 return root;
                
                
//             }else if(root->left!=NULL){
                
//                 return root->left;
                
//             }else if(root->right!=NULL){
//                 return root->right;
                
//             }else{
//                 return NULL;
//             }
//         }    
        
//     }
// };