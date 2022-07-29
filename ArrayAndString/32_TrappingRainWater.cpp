// class Solution
// {
// public:
//     int trap(vector<int> &height)
//     {
//         vector<int> left(height.size());
//         left[0] = height[0];
//         for (int i = 1; i < height.size(); i++)
//         {
//             left[i] = max(height[i], left[i - 1]);
//         }

//         vector<int> right(height.size());
//         right[height.size() - 1] = height[height.size() - 1];
//         for (int i = height.size() - 2; i >= 0; i--)
//         {
//             right[i] = max(height[i], right[i + 1]);
//         }
//         int water = 0;
//         for (int i = 1; i < height.size() - 1; i++)
//         {
//             int val = min(left[i], right[i]) - height[i];
//             water += val;
//         }
//         return water;
//     }
// };