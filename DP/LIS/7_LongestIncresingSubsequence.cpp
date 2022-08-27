//n^2 Approach
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         //n^2 solution
//         vector<int>dp(nums.size());
//         dp[0]=1;
//         for(int i =1;i<=nums.size()-1;i++){
//             int val = INT_MIN;
//             for(int j = 0; j<i; j++){
//                 if(nums[i]>nums[j]){
//                     val = max(val,dp[j]);
//                 }
//             }
//             if(val==INT_MIN){
//                 dp[i]=1;
//             }else{
//                 dp[i]=val+1;
//             }       
//         }
//          int ans = INT_MIN;
//          for(int &val : dp){
//              cout<<val<<endl;
//              ans = max(val,ans);
//          }
//         return ans;
//     }
// };

//nlog(n) solution

//24 Aug class

// class Solution {
// public:
    
//     void upperBound(vector<int>&tails, int lo, int hi, int tar){
        
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(tails[mid] > tar){
//                 hi = mid-1;
//             }else if(tails[mid]<tar){
//                 lo = mid+1;
//             }else{
//                 return;
//             }
//         }
//         //upper bound
//         tails[lo] = tar;
        
//     }
//     int lengthOfLIS(vector<int>& nums) {
        
//         vector<int>tails(nums.size());
//         int len = 1;
//         tails[0]=nums[0];
//         for(int i=1; i<nums.size();i++){
//             if(nums[i]>tails[len-1]){
//                 tails[len]=nums[i];
//                 len++;
//             }else{
//                 //binary search
//                 upperBound(tails,0,len-1,nums[i]);
//             }
//         }
        
//         return len;
//     }
// };