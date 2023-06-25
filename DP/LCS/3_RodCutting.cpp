
//Recursive + memo

// class Solution{
//   public:
  
//     int solver(int price[], int n, vector<int>&dp){
        
//         if(n==0 || n==1){
//             return dp[n];
//         }
        
//         if(dp[n]!=0){
//             return dp[n];
//         }
        
//         int profit = price[n-1];
//         for(int cut=1; cut<=n; cut++){
//             int val  = solver(price,n-cut,dp) + price[cut-1];
//             profit = max(profit,val);
            
//         }
        
//         return dp[n] = profit;
        
        
        
//     }
  
//     int cutRod(int price[], int n) {
        
//         vector<int>dp(n+1);
//         dp[0] = 0;
//         dp[1] = price[0];
        
//         return solver(price,n,dp);
        
        
//     }
// };


// Tabulation

// class Solution{
//   public:
//     int cutRod(int price[], int n) {
        
//         vector<int>dp(n+1);
//         dp[0] = 0;
        
//         for(int i=1; i<=n; i++){
//             int len = i;
//             int profit = price[i-1]; //when perform no cut
//             for(int j=len-1; j>=0; j--){
//                 int val = price[j-1] + dp[i-j];
//                 profit = max(profit,val);
//             }
//             dp[i]=profit;
            
//         }
        
//         return dp[n];
        
        
//     }
// };