// //No of subarrays with bounded maximum
// class Solution {
// public:
//     int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
//         int s = -1;
//         int e = -1;
//         int count = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>=left && nums[i]<=right){
//                 e=i;
//                 count +=e-s;
//             }else if(nums[i]<left){
//                 count+=e-s;
//             }else if(nums[i]>right){
//                 e=s=i;
//             }
//         }
        
//         return count;
        
//     }
// };