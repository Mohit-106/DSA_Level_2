// class Solution
// {
// public:
//     // Function to count subarrays with sum equal to 0.
//     long long int findSubarray(vector<long long int> &nums, int n)
//     {
//         unordered_map<long long, long long> mp;
//         mp[0] = 1;
//         long long psum = 0;
//         long long ans = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             psum += nums[i];
//             if (mp.find(psum) != mp.end())
//             {
//                 ans += mp[psum];
//                 mp[psum]++;
//             }
//             else
//             {
//                 mp[psum]++;
//             }
//         }
//         return ans;
//     }
// };