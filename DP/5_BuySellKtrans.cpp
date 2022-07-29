// class Solution {
// public:
//     int maxProfit(int k, vector<int>& prices) {

//         if(k==0 || prices.size()==0){
//             return 0;
//         }

//         vector<vector<int>>dp(k+1,vector<int>(prices.size()));

//         for(int i=1;i<dp.size();i++){
//             int maxm = INT_MIN;
//             for(int j =1; j<dp[0].size();j++){
//                 maxm = max(maxm,dp[i-1][j-1]-prices[j-1]);
//                 int val = maxm+prices[j];
//                 dp[i][j] = max(dp[i][j-1],val);
//             }
//             //cout<<maxm<<endl;
//         }

//         return dp[k][prices.size()-1];
//     }
// };