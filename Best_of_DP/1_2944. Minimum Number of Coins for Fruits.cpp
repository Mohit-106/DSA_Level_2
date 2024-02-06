// 2944. Minimum Number of Coins for Fruits

// Amazing Quetsion

// class Solution {
// public:
//     int solve(vector<int>&nums,vector<vector<int>>&dp,int i, int free){

//         if(i>=nums.size()){
//             return 0;
//         }

//         if(dp[i][free]!=-1) return dp[i][free];
        
//         // take
//         int a = nums[i] + solve(nums,dp,i+1,(2*i)+1);
//         // not take
//         int b = INT_MAX;
//         if(i<=free) b = solve(nums,dp,i+1,free);
//         return dp[i][free] = min(a,b);
//     }

//     int minimumCoins(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>>dp(n,vector<int>(n*2+1,-1));
//         return solve(nums,dp,1,1)+nums[0];
//     }
// };