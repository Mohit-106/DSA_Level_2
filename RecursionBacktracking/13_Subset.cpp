// class Solution {
// public:
//     vector<vector<int>>res;
//     void helper(vector<int>&nums, vector<int>&ans, int idx){
//         res.push_back(ans);
//         for(int i = idx ; i<nums.size(); i++){
//            ans.push_back(nums[i]);
//            helper(nums,ans,i+1);
//            ans.pop_back();
//         }
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>ans;
//         helper(nums,ans,0);
//         return res;
        
//     }
// };