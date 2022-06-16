//https://leetcode.com/problems/distribute-coins-in-binary-tree/

// class Pair {
//     public:
//     int nodes=0;
//     int coins=0;
    
// };





// class Solution {
// public:
    
//     int count=0;
    
//     Pair * helper(TreeNode * root){
        
//         if(root==NULL){
//             Pair * base = new Pair();
//             return base;
//         }
        
//         Pair * left  = helper(root->left);
//         Pair * right = helper(root->right);
        
//         Pair * ans = new Pair();
//         ans->nodes = left->nodes + right->nodes + 1;
//         ans->coins = left->coins + right->coins + root->val;
//         count += abs(ans->nodes - ans->coins);
//         return ans;
        
//     }
    
//     int distributeCoins(TreeNode* root) {
        
//         helper(root);
//         return count;
        
//     }
// };