// class Solution{
// public:
//     int matrixMultiplication(int n, int arr[])
//     {
//         vector<vector<int>>dp(n-1,vector<int>(n-1));
//         for(int gap=0; gap<dp.size(); gap++){
//             for(int i = 0,j=gap; j<dp[0].size(); i++,j++){
//                 if(gap==0){
//                     dp[i][j]=0;
//                 }else if(gap==1){
//                     dp[i][j] = arr[i]*arr[j+1]*arr[j]; //row of A * col of B * col of B
//                 }else{
//                     // Gap == number of possible comfiguration
//                     int val = INT_MAX;
//                     for(int k1 = 1, k2=gap; k1<=gap; k1++,k2--){
//                         int left = dp[i][j-k2];  //Dimentions-> arr[i]*arr[j-k2]
//                         int right = dp[i+k1][j];  //Dimentions-> arr[i+k1]*arr[j]
//                         int mulCost = arr[i]*arr[j+1]*arr[i+k1];
//                         //mulcost == left * (right+1) * common dimention 
//                         val = min(left+right+mulCost,val);
//                     }
//                     dp[i][j] = val;
//                 }
//             }
//         }
//         return dp[0][n-2];        
//     }