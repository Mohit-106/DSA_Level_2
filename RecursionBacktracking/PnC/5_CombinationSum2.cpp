// class Solution {
// public:
//     vector<vector<int>>ans;
//     void helper(vector<int>&candidates, int tar, int idx, vector<int>&res){
//         if(tar==0){
//             ans.push_back(res);
//             return;
//         }
//         if(idx==candidates.size()){
//             return;
//         }
//         for(int i = idx ; i<candidates.size(); i++){
//             if(i>idx && candidates[i]==candidates[i-1]) continue;
//             if(tar < candidates[i]) break;
//             res.push_back(candidates[i]);
//             helper(candidates,tar-candidates[i],i+1,res);
//             res.pop_back();
//         }
//     }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<int>res;
//         helper(candidates,target,0,res);
//         return ans;
//     }
// };