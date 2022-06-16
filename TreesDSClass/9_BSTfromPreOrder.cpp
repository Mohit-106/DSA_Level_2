// class Solution {
// public:
//     int idx=0;
//     TreeNode * helper(vector<int>& preorder, long rr, long lr){
        
//         if(idx==preorder.size() || preorder[idx] >= rr || preorder[idx] <=  lr ){
//             return NULL;
//         }
        
//         TreeNode * node = new TreeNode(preorder[idx++]);
//         node->left = helper(preorder,node->val,lr);
//         node->right = helper(preorder,rr,node->val);
//         return node;
        
//     }
    
    
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         long rr = 10e9+1;
//         long lr = -(10e9)-1;
        
//         return helper(preorder,rr,lr);
        
//     }
// };