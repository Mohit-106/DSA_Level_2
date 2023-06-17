// class Solution {
// public:

//    TreeNode * rightMostNode(TreeNode * left, TreeNode * curr){
//        while(left->right!=NULL && left->right!=curr){
//            left = left->right;
//        }
//        return left;
//    }

//    void moris(TreeNode * node){
//        TreeNode * curr = node;
//        TreeNode * a = NULL;
//        TreeNode *b = NULL;
//        TreeNode *prev = NULL;

//        while(curr!=NULL){
//            TreeNode * left = curr->left;
//            if(left==NULL){
//                if(prev != NULL && (curr->val < prev->val)){
//                    if(a==NULL){
//                        a=prev;
//                    }
//                    b=curr;
//                }
//                prev = curr;
//                curr = curr->right;
//            }else{

//                TreeNode * rmn  = rightMostNode(left,curr);

//                if(rmn->right == NULL){
//                    rmn->right = curr;
//                    curr = curr->left;
//                }else{
//                     if(prev != NULL && curr->val < prev->val){
//                      if(a==NULL){
//                         a=prev;
//                      }
//                       b=curr;
//                     }
//                    prev = curr;
//                    rmn->right = NULL;
//                    curr = curr->right;
//                }

//            }
//        }
//        int temp = a->val;
//        a->val = b->val;
//        b->val = temp;
//    }




//     void recoverTree(TreeNode* root) {

//         moris(root);
        
//     }
// };