// class Solution{
// 	public:
//     vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
//         vector<int>dp(V,100000000);
//         dp[S]=0;
//         for(int i=1;i<=V-1;i++){
//             for(vector<int>&edge : adj){
//                 int u = edge[0];
//                 int v = edge[1];
//                 int dist = edge[2];
//                 if(dp[u]==INT_MAX) continue;
//                 dp[v]=min(dp[u]+dist,dp[v]);
//             }
//         }
        
//         return dp;
        
//     }
// };