//https://leetcode.com/problems/binary-tree-cameras/submissions/

// class Solution {
// public:
//     int count = 0;
//     int camera = 1;
//     int monitored=2;
//     int not_monitored=3;
    
//     int helper(TreeNode* node){
        
//         if(node == NULL){
//             return monitored;
//         }
        
//         int left = helper(node->left);
//         int right =helper(node->right);
        
//         if(left == not_monitored || right==not_monitored){
//             count++;
//             return camera;
//         }else if(left==camera || right==camera){
            
//             return monitored;
            
//         }else{
//             return not_monitored;
//         }
//     }
    
    
//     int minCameraCover(TreeNode* root) {
        
//         int ans = helper(root);
//         if(ans==not_monitored){
//             count++;
//         }
//         return count;
//     }
// };