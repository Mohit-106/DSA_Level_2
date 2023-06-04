// class Solution
// {
// public:
//     int bestTeamScore(vector<int> &scores, vector<int> &ages)
//     {
//         int n = scores.size();
//         vector<pair<int, int>> v;
//         for (int i = 0; i < n; i++)
//         {
//             v.push_back(make_pair(ages[i], scores[i]));
//         }
//         sort(v.begin(), v.end());
//         vector<int> dp(n);
//         dp[0] = v[0].second;
//         int ans = dp[0];
//         for (int i = 0; i < n; i++)
//         {
//             int maxs = 0;
//             for (int j = i - 1; j >= 0; j--)
//             {
//                 if (v[i].second >= v[j].second)
//                 {
//                     maxs = max(maxs, dp[j]);
//                 }
//             }
//             dp[i] = maxs + v[i].second;
//             ans = max(ans, dp[i]);
//         }
//         return ans;
//     }
// };