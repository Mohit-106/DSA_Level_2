// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n,-1);
//         dp[n-1] = 0;
//         for(int i=n-2; i>=0; i--){
//             int minp = INT_MAX;
//             for(int j=1; j<= nums[i]; j++){
//                 if(i+j < n && dp[i+j]>=0){
//                     minp = min(minp,dp[i+j]);
//                 }
//             }
//             if(minp < INT_MAX){
//                 dp[i] = minp+1;
//             }
//         }
//         return dp[0];
//     }
// };