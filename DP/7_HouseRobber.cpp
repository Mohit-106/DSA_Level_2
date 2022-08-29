// //DP
// class Solution
// {
// public:
//     int robHelper(vector<int> &nums, int i, vector<int> &dp)
//     {
//         if (i == nums.size())
//         {
//             dp[i] = 0;
//             return 0;
//         }
//         if (i > nums.size())
//         {
//             return 0;
//         }
//         if (dp[i] != -1)
//         {
//             return dp[i];
//         }
//         int val1 = nums[i] + robHelper(nums, i + 2, dp);
//         int val2 = robHelper(nums, i + 1, dp);
//         dp[i] = max(val1, val2);
//         return dp[i];
//     }

//     int rob(vector<int> &nums)
//     {
//         vector<int> dp(nums.size() + 1, -1);
//         return robHelper(nums, 0, dp);
//     }
// };


//Greedy
