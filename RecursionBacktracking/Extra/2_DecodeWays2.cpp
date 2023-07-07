// class Solution
// {
// public:
//     int mod = 1e9 + 7;

//     int solver(string &s, int i, int &n, vector<int> &dp)
//     {

//         if (i == n)
//         {
//             return 1;
//         }

//         if (dp[i] != -1)
//         {
//             return dp[i];
//         }

//         int res = 0;
//         char ch1 = s[i];

//         if (ch1 != '0')
//         {
//             if (ch1 != '*')
//             {
//                 res += solver(s, i + 1, n, dp);

//                 if (i + 1 < n)
//                 {
//                     // nn
//                     if (s[i + 1] != '*')
//                     {
//                         char ch2 = s[i + 1];
//                         if ((ch1 - '0') * 10 + (ch2 - '0') <= 26)
//                         {
//                             res = (res + solver(s, i + 2, n, dp)) % mod;
//                         }
//                         // n*
//                     }
//                     else
//                     {
//                         for (int j = 1; j <= 9; j++)
//                         {
//                             int val = (ch1 - '0') * 10 + j;
//                             if (val <= 26)
//                             {
//                                 res = (res + solver(s, i + 2, n, dp)) % mod;
//                             }
//                         }
//                     }
//                 }
//             }
//             else
//             {

//                 for (int j = 1; j <= 9; j++)
//                 {
//                     res = (res + solver(s, i + 1, n, dp)) % mod;
//                 }

//                 if (i + 1 < n)
//                 {
//                     //**
//                     if (s[i + 1] == '*')
//                     {
//                         for (int j = 1; j <= 9; j++)
//                         {
//                             for (int k = 1; k <= 9; k++)
//                             {
//                                 int val = j * 10 + k;
//                                 if (val <= 26)
//                                 {
//                                     res = (res + solver(s, i + 2, n, dp)) % mod;
//                                 }
//                             }
//                         }
//                         //*n
//                     }
//                     else
//                     {
//                         for (int j = 1; j <= 9; j++)
//                         {
//                             char ch2 = s[i + 1];
//                             int val = j * 10 + (ch2 - '0');
//                             if (val <= 26)
//                             {
//                                 res = (res + solver(s, i + 2, n, dp)) % mod;
//                             }
//                         }
//                     }
//                 }
//             }
//         }

//         return dp[i] = res;
//     }

//     int numDecodings(string s)
//     {

//         vector<int> dp(s.size(), -1);
//         int n = s.size();
//         return solver(s, 0, n, dp);
//     }
// };