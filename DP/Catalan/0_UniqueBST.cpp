// class Solution {
// public:
//     int numTrees(int n) {
        
//         vector<int>dp(n+1);
//         dp[0]=1;
//         dp[1]=1;
        
//         for(int i=2; i<=n; i++){
//             int res=0;
//             for(int left = 0; left<i; left++){
//                 int right = i-left-1; //total - left - root(1)
//                 res += dp[left]*dp[right]; 
//             }
//             dp[i] = res;
//         }
        
//         return dp[n];
//     }
// };