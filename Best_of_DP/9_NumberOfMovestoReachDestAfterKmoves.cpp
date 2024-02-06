// here we need to store -ve number in an 2d array so to avoid negative indexing 
// we will add index by 1001 st 0 will store at 1001 ans -1000 will store at 1

// Leetcode 2400

// class Solution {
// public:
    
//     int m = 1000000007;
//     int memo(int s, int e, int k, vector<vector<int>>&dp){
        
//         if(k==0){
//             if(s==e){
//                 return 1;
//             }else{
//                 return 0;
//             }
//         }
//         if(dp[s+1001][k]!=-1){
//             return dp[s+1001][k];
//         }
//        return  dp[s+1001][k] = (memo(s-1,e,k-1,dp) + memo(s+1,e,k-1,dp))%m;

//     }
    
    
//     int numberOfWays(int startPos, int endPos, int k) {
//         vector<vector<int>>dp(3001,vector<int>(1001,-1));
//         return memo(startPos,endPos,k,dp);
//     }
// };