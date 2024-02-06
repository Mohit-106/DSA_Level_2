// leetcode 2770
// class Solution {
// public:
    
//     int dfs(vector<int>&nums, int i, int &tar,vector<int>&dp){

//         if(i == nums.size()-1){
//             return dp[i]=0;
//         }

//         if(dp[i]!=-1){
//             return dp[i];
//         }
        
//         int count = INT_MIN;
//         for(int j=i+1; j<nums.size(); j++){
//             if( abs(nums[j]-nums[i]) <= tar){
//                 count =  max(1+dfs(nums,j,tar,dp),count);
//             } 
//         }

//         return dp[i] = count;
        
        
//     }
    
    
//     int maximumJumps(vector<int>& nums, int target) {
//         vector<int>dp(nums.size(),-1);
//         int ans = dfs(nums,0,target,dp);
//         if(ans<0){
//             return -1;
//         }

//         return ans;
//     }
// };