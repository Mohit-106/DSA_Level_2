// class Solution
// {
// public:
//     int splitArray(vector<int> &nums, int m)
//     {
//         int lo = INT_MIN;
//         int hi = 0;
//         for (int &num : nums)
//         {
//             lo = max(lo, num);
//             hi += num;
//         }

//         while (lo < hi)
//         {
//             int mid = (lo + hi) / 2;
//             int csum = 0;
//             int cpart = 1;
//             for (int &num : nums)
//             {
//                 if (csum + num <= mid)
//                 {
//                     csum += num;
//                 }
//                 else
//                 {
//                     cpart++;
//                     csum = num;
//                 }
//             }

//             if (cpart > m)
//             {
//                 lo = mid + 1;
//             }
//             else
//             {
//                 hi = mid;
//             }
//         }

//         return lo;
//     }
// };