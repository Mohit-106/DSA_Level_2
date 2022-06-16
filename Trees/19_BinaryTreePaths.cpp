//https://leetcode.com/problems/binary-tree-paths/


// class Solution {
// public:
//     vector<string>ans;
//     void helper(TreeNode * root, string str){
        
//         if(root->left==NULL && root->right==NULL){
//             ans.push_back(str);
//         }
        
//         if(root->left!=NULL){
//             helper(root->left,str+"->"+to_string(root->left->val));
//         }
          
//         if(root->right!=NULL){
//             helper(root->right,str+"->"+to_string(root->right->val));
//         }
//     }
    
    
    
//     vector<string> binaryTreePaths(TreeNode* root) {
        
        
//         helper(root,to_string(root->val));
//         return ans;
        
        
//     }
// };