// class Solution
// {
// public:
//     vector<int> singleNumber(vector<int> &nums)
//     {

//         long long txor = nums[0];

//         for (int i = 1; i < nums.size(); i++)
//         {
//             txor ^= nums[i];
//         }

//         long long rmsbm = txor & -txor;

//         int num1 = 0;
//         int num2 = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if ((rmsbm & nums[i]) == 0)
//             {
//                 // on
//                 num1 ^= nums[i];
//             }
//             else
//             {
//                 // off
//                 num2 ^= nums[i];
//             }
//         }

//         return {num1, num2};
//     }
// };