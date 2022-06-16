// class Solution {
// public:
    
//     TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int ps,int pe, int is, int ie,unordered_map<int,int>&mp){
        
//         if(ps>pe){
//             return NULL;   
//         }
//         int idx = mp[preorder[ps]];
//         int count = idx-is;
//         TreeNode* node = new TreeNode(preorder[ps]);
//         node->left = helper(preorder,inorder,ps+1,ps+count,is,idx-1,mp);
//         node->right=helper(preorder,inorder,ps+count+1,pe,idx+1,ie,mp);
//         return node;
        
        
        
//     }
    
    
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
//         int n = preorder.size();
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++){
//             mp[inorder[i]]=i;
//         }
//         int ps=0,pe=n-1,is=0,ie=n-1;
//         return helper(preorder,inorder,ps,pe,is,ie,mp);
        
//     }
// };