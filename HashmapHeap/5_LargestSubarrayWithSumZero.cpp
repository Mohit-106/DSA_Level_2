// class Solution
// {
// public:
//     int maxLen(vector<int> &nums, int n)
//     {
//         unordered_map<int, int> fmap;
           //we have to assign this value because what if sum becomes zero 
           // dry run this test case (1,2,-1,-2)
//         fmap[0] = -1;
//         int psum = 0;
//         int ans = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             psum += nums[i];
//             if (fmap.find(psum) != fmap.end())
//             {
//                 ans = max(i - fmap[psum], ans);
//             }
//             else
//             {
//                 fmap[psum] = i;
//             }
//         }
//         return ans;
//     }
// };