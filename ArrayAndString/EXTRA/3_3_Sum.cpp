// class Solution
// {
// public:
//     vector<vector<int>> sum_2(vector<int> &nums, int si, int target)
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
//                 cout << nums[i] << nums[j] << endl;
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

//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> ans;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (i != 0 && nums[i] == nums[i - 1])
//             {
//                 continue;
//             }
//             int val = nums[i];
//             int target = 0 - val;
//             cout << target << endl;
//             vector<vector<int>> res = sum_2(nums, i + 1, target);
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
// };