// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
//         vector<int>dp(n,INT_MAX);
//         dp[src]=0;
//         vector<int>dph(n);
//         for(int i=1;i<=k+1;i++){
//           dph=dp;
//           for(auto &flight : flights){
//             int u = flight[0];
//             int v = flight[1];
//             int f = flight[2];
//             if(dp[u]!=INT_MAX){
//                 dph[v]=min(dph[v],dp[u]+f);
//             }
//           }
//           dp=dph; 
//         }
       
        
//         if(dp[dst]!=INT_MAX){
//             return dp[dst];
//         }else{
//             return -1;
//         }
        
        
        
//     }
// };