//Only 37 test cases passed


// class Solution
// {
// public:
//     bool helper(vector<vector<int>> &part, vector<int> &vsum, int ness, int k, vector<int> &nums, int idx)
//     {

//         if (idx == nums.size())
//         {
//             if (ness == k)
//             {
//                 bool flag = true;
//                 for (int i = 0; i < vsum.size() - 1; i++)
//                 {
//                     if (vsum[i] != vsum[i + 1])
//                     {
//                         flag = false;
//                         break;
//                     }
//                 }
//                 return flag;
//             }
//             return false;
//         }

//         for (int i = 0; i < part.size(); i++)
//         {

//             if (part[i].size() > 0)
//             {
//                 part[i].push_back(nums[idx]);
//                 vsum[i] += nums[idx];
//                 bool check = helper(part, vsum, ness, k, nums, idx + 1);
//                 if (check)
//                 {
//                     return true;
//                 }
//                 part[i].pop_back();
//                 vsum[i] -= nums[idx];
//             }
//             else
//             {
//                 part[i].push_back(nums[idx]);
//                 vsum[i] += nums[idx];
//                 bool check = helper(part, vsum, ness + 1, k, nums, idx + 1);
//                 if (check)
//                 {
//                     return true;
//                 }
//                 part[i].pop_back();
//                 vsum[i] -= nums[idx];
//                 break;
//             }
//         }
//         return false;
//     }

//     bool canPartitionKSubsets(vector<int> &nums, int k)
//     {

//         int sum = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i];
//         }

//         bool flag1 = true;
//         if (k == nums.size())
//         {
//             for (int i = 0; i < nums.size() - 1; i++)
//             {
//                 if (nums[i + 1] != nums[i])
//                 {
//                     flag1 = false;
//                     break;
//                 }
//             }
//             return flag1;
//         }

//         if (nums.size() < k || sum % k != 0)
//         {
//             return false;
//         }

//         vector<vector<int>> part(k, vector<int>());
//         vector<int> vsum(k, 0);
//         bool ans = helper(part, vsum, 0, k, nums, 0);
//         return ans;
//     }
// };