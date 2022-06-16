//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
//Reverse Traversal Approach
// class Solution {
// public:
//     TreeNode * prev=NULL;
//     void flatten(TreeNode* root) {
//         if(root!=NULL){
            
//             flatten(root->right);
//             flatten(root->left);
            
//             root->left = NULL;
//             root->right = prev;
//             prev = root;
            
            
//         }
        
        
//     }
// };


//Pre Order Approach 
//  TreeNode * prev=NULL;
//     void flatten(TreeNode* root) {
        
//         if(root){
//             TreeNode * lcall = root->left;
//             TreeNode * rcall = root->right;
            
//             if(prev){
//                 prev->left = NULL;
//                 prev->right = root;
//             }
//             prev = root;
            
//             flatten(lcall);
//             flatten(rcall);
            
//         }
       
            
            
    
        
//     }
// };

//Pair Approach

// class Pair {
//     public:
//     TreeNode * head;
//     TreeNode * tail;
// };
// class Solution {
// public:
    
//     Pair * helper(TreeNode * node){
        
//            if(node->left !=NULL && node->right!=NULL){
//            Pair*  left = helper(node->left);
//            Pair * right = helper(node->right);
//            Pair * newpair =  new Pair();
//            node->left = NULL;
//            node->right = left->head;
//            left->tail->right = right->head;
//            newpair->head = node;
//            newpair->tail = right->tail;
//            return newpair; 
           
//        }else if (node->left!=NULL){
           
//            Pair*  left = helper(node->left);
//            Pair * newpair =  new Pair();
//            node->left = NULL;
//            node->right = left->head;
//            newpair->head = node;
//            newpair->tail = left->tail;
//            return newpair; 
           
//        }else if(node->right != NULL){
//            Pair*  right = helper(node->right);
//            Pair * newpair =  new Pair();
//            node->left = NULL;
//            node->right = right->head;
//            newpair->head = node;
//            newpair->tail = right->tail;
//            return newpair; 
           
//        }else{
//            Pair * base = new Pair();
//            base->head = node;
//            base->tail = node;
//            return base;
//        }
        
        
//     }
    
//     void flatten(TreeNode* root) {
//         if(root==NULL){
//             return;
//         }
        
//         Pair * ans = helper(root);
        
//     }
// };