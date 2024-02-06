// Leetcode -> 2771

// class Solution {
// public:
//     int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {


//         int n = nums1.size();
//         vector<int>dp1(n);
//         vector<int>dp2(n);

//         dp1[0] = 1;
//         dp2[0] = 1;

//         int res=1;

//         for(int i=1; i<n; i++){
//             int maxn = 0;
//             //loop nums1 element
//             if(nums1[i] >= nums1[i-1]){
//                 maxn = max(maxn,dp1[i-1]);
//             }

//             if(nums1[i] >= nums2[i-1]){
//                 maxn = max(maxn,dp2[i-1]);
//             }
          
           
//             dp1[i] = maxn+1;
//             res = max(res,dp1[i]);
//             maxn = 0;

//             //For nums2
//             if(nums2[i] >= nums1[i-1]){
//                 maxn = max(maxn,dp1[i-1]);
//             }

//             if(nums2[i] >= nums2[i-1]){
//                 maxn = max(maxn,dp2[i-1]);
//             }

//             dp2[i] = maxn+1;
//             res = max(res,dp2[i]);
//         }

//         return res;

//     }
// };