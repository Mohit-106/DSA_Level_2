//Insight -> if we need to store minimum in the dp cell then default we can put some INT_MAX value in the dp

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
        
//         vector<int>dp(amount+1,INT_MAX);
//         dp[0]=0;
//         for(int i=0;i<coins.size();i++){
//             int coin = coins[i];
            
//             for(int j=1;j<dp.size();j++){
//                 if(coin<=j && dp[j-coin]!=INT_MAX){
//                     dp[j]=min((dp[j-coin]+1),dp[j]);
//                 }
                 
//             }
                       
//         }
//         if(dp[amount]==INT_MAX){
//             return -1;
//         }
//         return dp[amount]; 
//     }
// };