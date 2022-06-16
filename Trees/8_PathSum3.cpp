//https://leetcode.com/problems/path-sum-iii/submissions/

// class Solution {
// public:
    
//     int helper(TreeNode* root, long long psum, int targetSum, unordered_map<long long,long long>&mp){
        
//         int ans=0;
//         if(mp.find(psum-targetSum)!=mp.end()){
//             ans+=mp[psum-targetSum];
//         }
//         mp[psum]++;
//         if(root->left!=NULL){
//             int left = helper(root->left, psum + root->left->val, targetSum, mp);
//             ans+=left;
//         }
//         if(root->right!=NULL){
//              int right= helper(root->right,psum+root->right->val,targetSum,mp);
//              ans+=right;
//         }
        
       
       
//         if(mp[psum]==1){
//             mp.erase(psum);
//         }else{
//             mp[psum]--;   
//         }
//         return ans; 
//     }
    
//     int pathSum(TreeNode* root, int targetSum) {
//         if(root==NULL){
//             return 0;
//         }
        
//         unordered_map<long long, long long>mp;
//         mp[0]++;
//         int ans = helper(root,root->val,targetSum,mp);
//         return ans;
//     }
// };


// Static Variale Approach

// class Solution {
// public:
    
//     int count=0;
    
//     void helper(TreeNode* root, long long psum, int targetSum, unordered_map<long long,long long>&mp){
        
       
//         if(mp.find(psum-targetSum)!=mp.end()){
//             count+=mp[psum-targetSum];
//         }
//         mp[psum]++;
//         if(root->left!=NULL){
//             helper(root->left, psum + root->left->val, targetSum, mp);
           
//         }
//         if(root->right!=NULL){
//              helper(root->right,psum+root->right->val,targetSum,mp);
             
//         }
        
       
       
//         if(mp[psum]==1){
//             mp.erase(psum);
//         }else{
//             mp[psum]--;   
//         }
         
//     }
    
//     int pathSum(TreeNode* root, int targetSum) {
//         if(root==NULL){
//             return 0;
//         }
        
//         unordered_map<long long, long long>mp;
//         mp[0]++;
//         helper(root,root->val,targetSum,mp);
//         return count;
//     }
// };

