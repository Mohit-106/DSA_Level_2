// class Solution {
// public:
//     int numOfSubarrays(vector<int>& nums) {
//         int mod = 1e9+7;
//         int n = nums.size();


//         int psum=0;
//         int oddSum=0;
//         int evenSum=0;
//         int ans=0;
//         for(int i=0; i<n; i++){
//             psum+=nums[i];
//             if(psum%2==0){
//                 ans=(ans+oddSum)%mod;
//                 evenSum++;
//             }else{
//                 // 1 for odd subarray itself
//                 ans=(ans+(evenSum+1))%mod;
//                 oddSum++;
//             }
//         }
//         return ans;

        
//     }
// };