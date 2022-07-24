// //Product of array except itself

//using two arrays left and right
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
        
//         vector<int>left(nums.size(),1);
//         vector<int>right(nums.size(),1);
//         vector<int>ans(nums.size());
        
        
//         for(int i=1;i<left.size();i++){
//             left[i]=left[i-1]*nums[i-1];
//         }
        
//         for(int i=right.size()-2;i>=0;i--){
//             right[i]=right[i+1]*nums[i+1];
//         }
        
//         for(int i=0;i<ans.size();i++){
//             ans[i]=left[i]*right[i];
//         }
//         return ans;
//     }
// };


//using only one array
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int>left(nums.size(),1);
//         vector<int>ans(nums.size());
//         for(int i=1;i<left.size();i++){
//             left[i]=left[i-1]*nums[i-1];
//         }
        
//         int right = 1;
        
//         for(int i=ans.size()-1;i>=0;i--){
//             ans[i] = left[i]*right;
//             right*=nums[i];
//         }
//         return ans;
    
//     }
// };