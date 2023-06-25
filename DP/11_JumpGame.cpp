// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         if(nums.size()==1){
//             return true;
//         }
//         int n = nums.size();
//         vector<int>dp(n,-1);

//         dp[n-1] = 0;

//         for(int i = n-2; i>=0; i--){

//             for(int j = 1; j<=nums[i]; j++){
//                 if(i+j<n && dp[i+j]>=0){
//                     dp[i] = 1;
//                     break;
//                 }
//             }

//         }

//         if(dp[0]>0){
//             return true;
//         }


//         return false;


//     }
// };