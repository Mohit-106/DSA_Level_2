// class Solution
// {
// public:
//     void swap(vector<int> &nums, int i, int j)
//     {
//         int temp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = temp;
//     }
//     vector<int> sortArrayByParity(vector<int> &nums)
//     {
//         int i = 0;
//         int j = 0;
//         while (j < nums.size())
//         {
//             if (nums[j] % 2 == 0)
//             {
//                 swap(nums, i, j);
//                 j++;
//                 i++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         return nums;
//     }
// };