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
//             int maxn = 1;
//             //loop for nums1
//             for(int j=i-1; j>=0; j--){
//                 if(nums1[i] >= nums1[j]){
//                     maxn =max(maxn,dp1[j]);
//                 }
//                 if(nums1[i] >= nums2[j]){
//                     maxn = max(maxn,dp2[j]);
//                 }
//             }
//             if(maxn==0){
//                 dp1[i] = 1;
//             }else{
//                 dp1[i] = maxn+1;
//             }
//             res = max(res,dp1[i]);

//             maxn = 0;

//             //loop for nums2
//             for(int j=i-1; j>=0; j--){
//                 if(nums2[i] >= nums1[j]){
//                     maxn =max(maxn,dp1[j]);
//                 }
//                 if(nums2[i] >= nums2[j]){
//                     maxn = max(maxn,dp2[j]);
//                 }
//             }
//             if(maxn==0){
//                 dp2[i] = 1;
//             }else{
//                 dp2[i] = maxn+1;
//             }
//             res = max(res,dp2[i]);
//         }

//         // for(int i=0; i<n; i++){
//         //     cout<<dp1[i]<<"--"<<dp2[i]<<endl;
//         // }

//         return res;

        
//     }
// };