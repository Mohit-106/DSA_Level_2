// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/

// class Solution {
// public:

//     TreeNode* helper(vector<int>& preorder, vector<int>& postorder, unordered_map<int,int>&mp, int prelo, int prehi, int postlo, int posthi){

//         if(prelo > prehi || postlo > posthi){
//             return NULL;
//         }
//          TreeNode * newNode  = new TreeNode(preorder[prelo]);

//         if(prelo < prehi){
//         int idx = mp[preorder[prelo+1]];
//         int count = idx-postlo+1;

//         newNode->left = helper(preorder,postorder,mp,prelo+1,prelo+count,postlo,idx);
//         newNode->right = helper(preorder,postorder,mp,prelo+count+1,prehi,idx+1,posthi-1);

//         }

//         return newNode;

//     }

//     TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
//         int n = postorder.size();
//         unordered_map <int,int>mp;
//         for(int i=0; i<n ; i++){
//             mp[postorder[i]]=i;
//         }

//         return helper(preorder, postorder, mp , 0, n-1, 0, n-1);

//     }

// };