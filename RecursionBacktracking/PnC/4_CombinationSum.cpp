// class Solution
// {
// public:
//     vector<vector<int>> v;
//     void helper(vector<int> &candidates, vector<int> &res, int tar, int idx)
//     {
//         if (tar == 0)
//         {
//             v.push_back(res);
//             return;
//         }
//         if (idx == candidates.size())
//         {
//             return;
//         }
//         if (candidates[idx] <= tar)
//         {
//             res.push_back(candidates[idx]);
//             helper(candidates, res, tar - candidates[idx], idx);
//             res.pop_back();
//         }
//         helper(candidates, res, tar, idx + 1);
//     }
//     vector<vector<int>> combinationSum(vector<int> &candidates, int target)
//     {
//         vector<int> res;
//         helper(candidates, res, target, 0);
//         return v;
//     }
// };