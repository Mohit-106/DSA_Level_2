
// class Solution {
// public:
//     vector<vector<int>>ans;
   
//     void permuteHelper(vector<int>&nums, int idx){
//         if(idx==nums.size()-1){
//             ans.push_back(nums);
//             return;
//         }
//          unordered_set<int>s;
//         for(int i=idx;i<nums.size();i++){
//             if(s.find(nums[i])!=s.end()) continue;
//             s.insert(nums[i]);
//             swap(nums[i],nums[idx]);
//             permuteHelper(nums,idx+1);
//             swap(nums[i],nums[idx]);
            
//         }  
//     }
    
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         if(nums.size()==0){
//             vector<vector<int>>base;
//             return base;
//         }
        
//         permuteHelper(nums,0);
//         return ans;
        
//     }
// };