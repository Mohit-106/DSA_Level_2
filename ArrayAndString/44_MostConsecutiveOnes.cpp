// class Solution
// {
// public:
//     int longestOnes(vector<int> &nums, int k)
//     {
//         int res = 0;
//         int len = 0;
//         int i = 0;
//         int j = 0;
//         int cz = 0;
//         while (i < nums.size())
//         {
//             if (nums[i] == 0)
//             {
//                 cz++;
//             }
//             if (cz > k)
//             {
//                 if (nums[j] == 0)
//                 {
//                     cz--;
//                 }
//                 j++;
//             }
//             len = i - j + 1;
//             res = max(res, len);
//             i++;
//         }
//         return res;
//     }
// };