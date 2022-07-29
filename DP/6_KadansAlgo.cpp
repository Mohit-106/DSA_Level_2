// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {

//         int currMax = nums[0];
//         int olMax = nums[0];

//         for (int i = 1; i < nums.size(); i++)
//         {
//             if (currMax < 0)
//             {
//                 currMax = nums[i];
//             }
//             else
//             {
//                 currMax += nums[i];
//             }

//             olMax = max(currMax, olMax);
//         }

//         return olMax;
//     }
// };