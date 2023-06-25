// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     bool isSymmetricHelpr(TreeNode * n1 , TreeNode * n2){

//         if(n1==NULL && n2==NULL){
//             return true;
//         }

//         if((n1==NULL && n2!=NULL) || (n2==NULL && n1!=NULL)){
//             return false;
//         }

//         if(n1->val != n2->val){
//             return false;
//         }

//         bool check1 = isSymmetricHelpr(n1->left,n2->right);

//         if(check1 == false){
//             return false;
//         }

//         bool check2 = isSymmetricHelpr(n1->right,n2->left);

//         if(check2 == false){
//             return false;
//         }

//         return true;



//     }

//     bool isSymmetric(TreeNode* root) {

//         return isSymmetricHelpr(root,root);
        
//     }
// };