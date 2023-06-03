// class Solution
// {
// public:
//     int longestCommonSubsequence(string s1, string s2)
//     {

//         bool flag = false;
//         ;

//         for (int i = 0; i < s1.size(); i++)
//         {
//             for (int j = 0; j < s2.size(); j++)
//             {
//                 if (s1[i] == s2[j])
//                 {
//                     flag = true;
//                     break;
//                 }
//             }
//         }

//         if (flag == false)
//         {
//             return 0;
//         }

//         vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1));

//         for (int i = dp.size() - 1; i >= 0; i--)
//         {
//             for (int j = dp[i].size() - 1; j >= 0; j--)
//             {
//                 if (i != dp.size() - 1 && j != dp[i].size() - 1)
//                 {
//                     if (s1[i] == s2[j])
//                     {
//                         dp[i][j] = dp[i + 1][j + 1] + 1;
//                     }
//                     else
//                     {
//                         dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
//                     }
//                 }
//             }
//         }

//         return dp[0][0];
//     }
// };