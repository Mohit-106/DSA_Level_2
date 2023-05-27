//Approach 1
//return type style like strings
// class Solution {
// public:
    
//     vector<vector<int>> permuteHelper(vector<int>&nums){
//         if(nums.size()==1){
//             vector<vector<int>>base;
//             base.push_back(nums);
//             return base;
//         }
//         vector<vector<int>>ans;
//         for(int i=0;i<nums.size();i++){
//             int n = nums[i];
//             vector<int>call = nums;
//             call.erase(call.begin()+i);
//             vector<vector<int>>asf = permuteHelper(call);
//             for(vector<int> num : asf){
//               num.push_back(n);
//               ans.push_back(num);
//             }
//         }
//         return ans;
        
//     }
    
//     vector<vector<int>> permute(vector<int>& nums) {
//         if(nums.size()==0){
//             vector<vector<int>>base;
//             return base;
//         }
//         return permuteHelper(nums);
//     }
// };

//Approach 2 use visited(must dry run its call stack is confusing)
// class Solution {
// public:
//     vector<vector<int>>ans;
//    void permuteHelper(vector<int>&nums, vector<bool>&visited,vector<int>&ds){
//         if(ds.size()==nums.size()){
//             ans.push_back(ds);
//             return;
//         }
        
//         for(int i=0;i<nums.size();i++){
//             if(visited[i]==true) continue;
//             visited[i]=true;
//             ds.push_back(nums[i]);
//             permuteHelper(nums,visited,ds);
//             ds.pop_back();
//             visited[i]=false;      
//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         if(nums.size()==0){
//             vector<vector<int>>base;
//             return base;
//         }
//         vector<bool>visited(nums.size());
//         vector<int>ds;
//         permuteHelper(nums,visited,ds);
//         return ans;
        
//     }
// };


//Approach 3 Swap Methos easy recursion
// class Solution {
// public:
//     vector<vector<int>>ans;
    
//     void permuteHelper(vector<int>&nums, int idx){
//         if(idx==nums.size()-1){
//             ans.push_back(nums);
//             return;
//         }
        
//         for(int i=idx;i<nums.size();i++){
//             swap(nums[i],nums[idx]);
//             permuteHelper(nums,idx+1);
//             swap(nums[i],nums[idx]);
            
//         }  
//     }
    
//     vector<vector<int>> permute(vector<int>& nums) {
//         if(nums.size()==0){
//             vector<vector<int>>base;
//             return base;
//         }
        
//         permuteHelper(nums,0);
//         return ans;
        
//     }
// };