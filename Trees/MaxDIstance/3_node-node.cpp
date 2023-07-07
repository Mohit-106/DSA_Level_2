// class Solution {
//   public:
//     //Function to return maximum path sum from any node in a tree.
//     int ans = INT_MIN;
    
//     int solver(Node * root){
        
//         if(root==NULL){
//             return 0;
//         }
        
//         int left = solver(root->left);
//         int right = solver(root->right);
//         int val= root->data;
//         int psum = left + val + right;
          //ans could be left subtree + node + right subtree
//         ans = max(ans,psum);
           // max of left subtree and right subtree
//         ans = max(ans,max((left+val),(right+val)));
          // in case bath left and right are more negative then only node can be a ans
//         ans = max(ans,val);
           
//         return max(val,max(left+val,right+val));
        
//     }
    
//     int findMaxSum(Node* root)
//     {
//         solver(root);
//         return ans;
//     }
// };