// // when one nnumber can only be used once

// class Solution
// {
// public:
//     vector<vector<int>> ans;

//     void combinationSum2Helper(vector<int> &candidates, int i, int target, int ssf, vector<int> asf)
//     {

//         if (ssf == target)
//         {
//             ans.push_back(asf);
//             return;
//         }

//         if (ssf > target)
//         {
//             return;
//         }

//         if (i == candidates.size())
//         {
//             return;
//         }

//         asf.push_back(candidates[i]);
//         combinationSum2Helper(candidates, i + 1, target, ssf + candidates[i], asf);
//         asf.pop_back();
//         combinationSum2Helper(candidates, i + 1, target, ssf, asf);
//     }

//     vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
//     {
//         vector<int> asf;
//         combinationSum2Helper(candidates, 0, target, 0, asf);
//         return ans;
//     }
// };