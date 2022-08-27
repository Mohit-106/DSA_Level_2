// class Solution
// {
// public:
//     vector<vector<int>> twoSum(vector<int> &nums, int si, long long target)
//     {
//         vector<vector<int>> res;
//         int i = si;
//         int j = nums.size() - 1;
//         while (i < j)
//         {
//             if (i != si && nums[i] == nums[i - 1])
//             {
//                 i++;
//                 continue;
//             }
//             if (nums[j] + nums[i] == target)
//             {
//                 res.push_back({nums[i], nums[j]});
//                 // cout<<nums[i]<<nums[j]<<endl;
//                 i++;
//                 j--;
//             }
//             else if (nums[i] + nums[j] > target)
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         return res;
//     }
//     vector<vector<int>> threeSum(vector<int> &nums, long long target, int si)
//     {
//         vector<vector<int>> ans;
//         for (int i = si; i < nums.size(); i++)
//         {
//             if (i != si && nums[i] == nums[i - 1])
//             {
//                 continue;
//             }
//             int val = nums[i];
//             long long tar = target - val;
//             // cout<<target<<endl;
//             vector<vector<int>> res = twoSum(nums, i + 1, tar);
//             for (auto v : res)
//             {
//                 for (auto num : v)
//                 {
//                     cout << num << " ";
//                 }
//             }
//             for (auto &v : res)
//             {
//                 v.push_back(val);
//                 ans.push_back(v);
//             }
//         }
//         return ans;
//     }
//     vector<vector<int>> fourSum(vector<int> &nums, int target)
//     {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> res;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (i != 0 && nums[i] == nums[i - 1])
//             {
//                 continue;
//             }
//             int val = nums[i];
//             long long newTar = target - nums[i];
//             vector<vector<int>> ans = threeSum(nums, newTar, i + 1);
//             for (vector<int> &v : ans)
//             {
//                 v.push_back(val);
//                 res.push_back(v);
//             }
//         }
//         return res;
//     }
// };