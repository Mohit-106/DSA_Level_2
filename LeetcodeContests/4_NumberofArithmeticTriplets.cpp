// class Solution
// {
// public:
//     int arithmeticTriplets(vector<int> &nums, int diff)
//     {
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int j = i + 1;
//             int k = i;
//             int cnt = 0;
//             while (j < nums.size())
//             {
//                 if (nums[k] + diff == nums[j])
//                 {
//                     cnt++;
//                     k = j;
//                 }
//                 j++;
//             }
//             if (cnt >= 2)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };