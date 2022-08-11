// class Solution
// {
// public:
//     int smallestDistancePair(vector<int> &nums, int k)
//     {
//         sort(nums.begin(), nums.end());
//         int lo = INT_MAX;
//         for (int i = 1; i < nums.size(); i++)
//         {
//             lo = min(lo, nums[i] - nums[i - 1]);
//         }
//         int hi = nums[nums.size() - 1] - nums[0];
//         while (lo < hi)
//         {
//             // let this difference is the kth smallest difference
//             int mid = (lo + hi) / 2;
//             int eltm = 0; // elements less than potential answer
//             int j = 0;
//             // check how many pairs are there with difference <= mid
//             // if there are exctly >=k pairs then check for some more lest values
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 while (j < nums.size() && nums[j] - nums[i] <= mid)
//                 {
//                     j++;
//                 }
//                 eltm += (j - i - 1); // pair only can be form with middle elements
//             }
//             if (eltm < k)
//             {
//                 // if less pairs are there then increase the limit
//                 lo = mid + 1;
//             }
//             else
//             {
//                 // if there are exctly >=k pairs then check for some more lest values
//                 hi = mid;
//             }
//         }
//         return hi;
//     }
// };