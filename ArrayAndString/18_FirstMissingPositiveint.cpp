// class Solution
// {
// public:
//     int firstMissingPositive(vector<int> &nums)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] <= 0 || nums[i] > nums.size())
//             {
//                 nums[i] = nums.size() + 1;
//             }
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int val = abs(nums[i]);
//             if (val <= nums.size())
//             {
//                 if (nums[val - 1] > 0)
//                 {
//                     nums[val - 1] = -1 * nums[val - 1];
//                 }
//             }
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] > 0)
//             {
//                 return i + 1;
//             }
//         }
//         return nums.size() + 1;
//     }
// };