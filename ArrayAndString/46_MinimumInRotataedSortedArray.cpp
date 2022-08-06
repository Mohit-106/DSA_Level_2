// class Solution
// {
// public:
//     int findMin(vector<int> &nums)
//     {
//         int lo = 0;
//         int hi = nums.size() - 1;

//         while (lo < hi)
//         {
//             int mid = (lo + hi) / 2;
//             if (nums[mid] > nums[hi])
//             {
//                 lo = mid + 1;
//             }
//             else
//             {
//                 // in case min at mid then we have to take it to next partition
//                 hi = mid;
//             }
//         }

//         return nums[hi];
//     }
// };