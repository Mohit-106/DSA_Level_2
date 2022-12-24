// class Solution
// {
// public:
//     int digitsum(string s)
//     {
//         int ans = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             int ch = s[i] - '0';
//             ans += ch;
//         }
//         cout << ans << endl;
//         return ans;
//     }
//     int maximumSum(vector<int> &nums)
//     {
//         unordered_map<int, int> mp; // sum of digit,index
//         int msum = INT_MIN;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int dsum = digitsum(to_string(nums[i]));
//             if (mp.find(dsum) != mp.end())
//             {
//                 msum = max(msum, nums[mp[dsum]] + nums[i]);
//                 if (nums[mp[dsum]] < nums[i])
//                 {
//                     mp[dsum] = i;
//                 }
//             }
//             else
//             {
//                 mp[dsum] = i;
//             }
//         }
//         for (auto val : mp)
//         {
//             cout << val.first << "->" << val.second << endl;
//         }
//         if (msum == INT_MIN)
//             return -1;
//         return msum;
//     }
// };