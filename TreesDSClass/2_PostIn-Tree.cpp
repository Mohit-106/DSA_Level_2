// class Solution {
// public:
    
//     TreeNode * helper(vector<int>& inorder, vector<int>& postorder,unordered_map<int,int>&mp, int postlo, int posthi, int inlo, int inhi){
        
//         if(inlo>inhi || postlo > posthi){
//             return NULL;
//         }
        
//         TreeNode * newNode = new TreeNode(postorder[posthi]);
//         int idx = mp[postorder[posthi]];
//         int count = idx - inlo;
        
//         newNode->left = helper(inorder,postorder,mp,postlo,postlo+count-1,inlo,idx-1);
//         newNode->right = helper(inorder,postorder,mp,postlo+count,posthi-1,idx+1,inhi);
        
//         return newNode;
        
        
        
        
//     }
    
    
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         int n = inorder.size();
//         unordered_map <int,int> mp;
//         for(int i=0;i<n;i++){
            
//             mp[inorder[i]]=i;
            
//         }
        
//         return helper(inorder, postorder, mp, 0,n-1, 0, n-1);
        
//     }
// };