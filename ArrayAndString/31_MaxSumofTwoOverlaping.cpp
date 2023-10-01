// class Solution
// {
// public:
//     int getMax(vector<int> &nums, int fl, int sl)
//     {

//         int ssf = 0;
//         vector<int> left(nums.size());
//         for (int i = 0; i < nums.size(); i++)
//         {
//             ssf += nums[i];
//             if (i == fl - 1)
//             {
//                 left[i] = ssf;
//             }
//             else if (i > fl - 1)
//             {
//                 ssf -= nums[i - fl];
//                 left[i] = max(ssf, left[i - 1]);
//             }
//         }

//         ssf = 0;
//         vector<int> right(nums.size());
//         for (int i = nums.size() - 1; i >= 0; i--)
//         {
//             ssf += nums[i];
//             if (i == nums.size() - sl)
//             {
//                 right[i] = ssf;
//             }
//             else if (i < nums.size() - sl)
//             {
//                 ssf -= nums[i + sl];
//                 right[i] = max(ssf, right[i + 1]);
//             }
//         }

//         int ans = INT_MIN;

//         for (int i = fl - 1; i < nums.size() - sl; i++)
//         {
//             int val = left[i] + right[i + 1];
//             ans = max(ans, val);
//         }
//         return ans;
//     }

//     int maxSumTwoNoOverlap(vector<int> &nums, int firstLen, int secondLen)
//     {

//         int max1 = getMax(nums, firstLen, secondLen);
//         int max2 = getMax(nums, secondLen, firstLen);

//         return max(max1, max2);
//     }
// };



