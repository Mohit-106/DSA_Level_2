// class Solution {
// public:
//     int sum=0;
//     void solver(TreeNode * node){

//         if(node==NULL){
//             return;
//         }
//         solver(node->right);
//         sum+=node->val;
//         node->val=sum;
//         solver(node->left);

//     }

//     TreeNode* bstToGst(TreeNode* root) {
//         TreeNode * node = root;
//         solver(root);
//         return root;
//     }
// };