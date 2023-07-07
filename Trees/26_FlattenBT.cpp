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






// class Solution {
// public:

//    class Pair{

//        public:
//        TreeNode * head=NULL;
//        TreeNode * tail=NULL;

//    };

//    Pair * solver(TreeNode * root){

//        if(root==NULL){
//            Pair * base = new Pair();
//            return base;
//        }

//        Pair * left = solver(root->left);
//        Pair * right =  solver(root->right);
//        Pair * newPair = new Pair();
//        if((left->head == NULL && left->tail == NULL) && (right->head == NULL && right->tail == NULL)){
//            newPair->head = root;
//            newPair->tail = root;
//        }else if(left->head ==  NULL && left->tail == NULL){
//            root->right = right->head;
//            newPair->head = root;
//            newPair->tail = right->tail;
//            root->left == NULL;
//        }else if(right->head ==  NULL && right->tail == NULL){
//            root->right = left->head;
//            newPair->head = root;
//            newPair->tail = left->tail;
//            root->left =  NULL;
//        }else{
//            root->right = left->head;
//            left->tail->right = right->head;
//            newPair->head = root;
//            newPair->tail = right->tail;
//            root->left = NULL;
//        }
//        return newPair;

//    }


//     void flatten(TreeNode* root) {
//         solver(root);
//     }
// };