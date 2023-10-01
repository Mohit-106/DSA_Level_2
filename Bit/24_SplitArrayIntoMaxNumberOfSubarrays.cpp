// class Solution
// {
// public:
//     int maxSubarrays(vector<int> &nums)
//     {
//         int n = nums.size();
//         if (n <= 1)
//             return 1;

//         int nd = nums[0] & nums[1];
//         for (int i = 2; i < nums.size(); i++)
//         {
//             nd &= nums[i];
//         }

//         if (nd > 0)
//         {
//             return 1;
//         }

//         int ans = 0;
//         int x = nums[0];
//         if (x == 0)
//             ans++;
//         for (int i = 1; i < n; i++)
//         {
//             if (x == 0)
//                 x = nums[i];
//             x &= nums[i];
//             if (x == 0)
//             {
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };


// Insight -> x&y == always a number which has value <= min(x,y) 
// If we and entire array then result will be equal to <= min(array elements);