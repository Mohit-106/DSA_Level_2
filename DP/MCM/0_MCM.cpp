// class Solution
// {
// public:
//     int matrixMultiplication(int n, int arr[])
//     {

//         vector<vector<int>> dp(n - 1, vector<int>(n - 1));
//         int m = dp.size();

//         for (int gap = 0; gap < m; gap++)
//         {
//             int i = 0;
//             int j = gap;
//             while (j < m)
//             {
//                 if (gap == 0)
//                 {
//                     dp[i][j] = 0;
//                 }
//                 else if (gap == 1)
//                 {
//                     dp[i][j] = arr[i] * arr[j] * arr[j + 1];
//                 }
//                 else
//                 {
//                     int val = INT_MAX;
//                     for (int k = i; k < j; k++)
//                     {

//                         int ldim = dp[i][k];     // left dimension of matrix;
//                         int rdim = dp[k + 1][j]; // right dimention of the matrix
//                         int multiplicationcost = arr[i] * arr[k + 1] * arr[j + 1];
//                         int res = ldim + rdim + multiplicationcost;
//                         val = min(val, res);
//                     }
//                     dp[i][j] = val;
//                 }
//                 i++;
//                 j++;
//             }
//         }

//         return dp[0][m - 1];
//     }
// };