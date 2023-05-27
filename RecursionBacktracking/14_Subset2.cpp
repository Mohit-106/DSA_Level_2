// class Solution {
// public:
//     vector<vector<int>>v;
//     void helper(vector<int>&nums, int idx, vector<int>&ans){
//         v.push_back(ans);
//         for(int i = idx; i<nums.size(); i++){
//             if(i>idx && nums[i]==nums[i-1]) continue;
//             ans.push_back(nums[i]);
//             helper(nums,i+1,ans);
//             ans.pop_back();
//         }
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<int>ans;
//         sort(nums.begin(),nums.end());
//         helper(nums,0,ans);
//         return v;
//     }
// };