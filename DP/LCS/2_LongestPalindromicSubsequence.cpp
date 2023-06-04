// class Solution
// {
// public:
//     int longestPalindromeSubseq(string s)
//     {
//         vector<vector<int>> dp(s.size(), vector<int>(s.size()));
//         for (int gap = 0; gap < s.size(); gap++)
//         {
//             for (int i = 0, j = gap; j < s.size(); i++, j++)
//             {
//                 if (gap == 0)
//                 {
//                     dp[i][j] = 1;
//                 }
//                 else if (gap == 1)
//                 {
//                     if (s[i] == s[j])
//                     {
//                         dp[i][j] = 2;
//                     }
//                     else
//                     {
//                         dp[i][j] = 1;
//                     }
//                 }
//                 else
//                 {
//                     if (s[i] == s[j])
//                     {
//                         dp[i][j] = dp[i + 1][j - 1] + 2;
//                     }
//                     else
//                     {
//                         dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
//                     }
//                 }
//             }
//         }
//         return dp[0][s.size() - 1];
//     }
// };