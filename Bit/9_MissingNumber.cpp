// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {
//         int txor = 0;
//         for (int val : nums)
//         {
//             txor ^= val;
//         }

//         for (int i = 0; i <= nums.size(); i++)
//         {
//             txor ^= i;
//         }

//         return txor;
//     }
// };