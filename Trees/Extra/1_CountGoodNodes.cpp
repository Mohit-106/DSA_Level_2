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

//     int ans=0;

//     void goodNodesHelper(TreeNode * node , int maxtillnow){

//         if(node == NULL){
//             return;
//         }

//         if(node->val >= maxtillnow){
//             ans++;
//         }
        
//         goodNodesHelper(node->left, max(node->val,maxtillnow));
//         goodNodesHelper(node->right, max(node->val,maxtillnow));


//     }


//     int goodNodes(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }

//         goodNodesHelper(root,root->val);
//         return ans;
        
//     }
// };