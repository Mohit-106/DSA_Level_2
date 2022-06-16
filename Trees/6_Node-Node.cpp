// class Solution {
// public:
//     int ans = INT_MIN;
    
//     int helper(TreeNode * node){
//         if(node==NULL){
//             return 0;
//         }
        
//         int left = helper(node->left);
//         int right = helper(node->right);
//         int left_dash = max(0,left);
//         int right_dash = max(0,right);
//         int toCompare = left_dash + node->val + right_dash;
//         ans = max(toCompare,ans);
        
//         return max(left_dash,right_dash)+node->val;
        
        
//     }
    
//     int maxPathSum(TreeNode* root) {
//         if(root==NULL){
//             return ans;
//         }
//         if(root->left == NULL && root->right==NULL){
//             return root->val;
//         }
        
        
//         helper( root);
//         return ans;
        
//     }
// };