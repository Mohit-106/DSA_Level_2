// 416. Partition Equal Subset Sum
// class Solution
// {
// public:
//     bool targetSumSubset(vector<int> &nums, int tar)
//     {
//         vector<vector<bool>> dp(nums.size() + 1, vector<bool>(tar + 1));
//         for (int i = 0; i < dp.size(); i++)
//         {
//             for (int j = 0; j < dp[0].size(); j++)
//             {
//                 if (i == 0 && j == 0)
//                 {
//                     dp[i][j] = true;
//                 }
//                 else if (i == 0)
//                 {
//                     dp[i][j] = false;
//                 }
//                 else if (j == 0)
//                 {
//                     dp[i][j] == true;
//                 }
//                 else if (dp[i - 1][j] == true)
//                 {
//                     dp[i][j] = true;
//                 }
//                 else
//                 {
//                     int runs = nums[i - 1];
//                     if (j - runs >= 0)
//                     {
//                         dp[i][j] = dp[i - 1][j - runs];
//                     }
//                 }
//             }
//         }
//         return dp[dp.size() - 1][tar];
//     }
//     bool canPartition(vector<int> &nums)
//     {
//         // If sum of all elements of array id odd then partition is not possible
//         // this is because  if sum is odd
//         //  Both partitioned subarrays should be of same nature odd or even
//         //  Since odd+odd == even
//         //  even + even == even
//         // So sum can never be odd hence partiton does not exist
//         int sum = 0;
//         for (int val : nums)
//         {
//             sum += val;
//         }
//         if (sum % 2 == 1)
//         {
//             return false;
//         }
//         // if any subset of the array give sum/2 then half other part will definitely give sum/2
//         // Since in this case partition is possible
//         int tar = sum / 2;
//         bool ans = targetSumSubset(nums, tar);
//         cout << ans << endl;
//         return ans;
//     }
// };