// O(n) time and sapce

// class Solution
// {
// public:
//     int partitionDisjoint(vector<int> &nums)
//     {

//         vector<int> maxLeft(nums.size());
//         vector<int> minRight(nums.size());

//         int maxl = nums[0];
//         maxLeft[0] = nums[0];
//         for (int i = 1; i < nums.size(); i++)
//         {
//             maxl = max(nums[i], maxl);
//             maxLeft[i] = maxl;
//         }

//         int minr = nums[nums.size() - 1];
//         minRight[nums.size() - 1] = nums[nums.size() - 1];
//         for (int i = nums.size() - 2; i >= 0; i--)
//         {
//             minr = min(minr, nums[i]);
//             minRight[i] = minr;
//         }

//         for (int i = 0; i < nums.size() - 1; i++)
//         {

//             if (maxLeft[i] <= minRight[i + 1])
//             {
//                 return i + 1;
//             }
//         }

//         return -1;
//     }
// };

// O(n) time and O(1) space

// class Solution
// {
// public:
//     int partitionDisjoint(vector<int> &nums)
//     {

//         int ans = 1;
//         int maxts = nums[0];
//         int maxtp = nums[0];

//         for (int i = 1; i < nums.size(); i++)
//         {

//             maxts = max(maxts, nums[i]);

//             if (maxtp > nums[i])
//             {
//                 maxtp = maxts;
//                 ans = i + 1;
//             }
//         }

//         return ans;
//     }
// };