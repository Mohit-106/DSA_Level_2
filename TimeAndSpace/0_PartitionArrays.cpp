//less than pivot + equal to pivot + greater than pivot

// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {     
//         int i = 0;
//         int j = 0;
//         while(i<nums.size()){
//             if(nums[i]<pivot){
//                 swap(nums[i],nums[j]);
//                 i++;
//                 j++;
//             }else{
//                 i++;
//             }
//         }
//         i=0; j=0;
//         while(i<nums.size()){          
//             if(nums[i]<pivot){
//                 i++;
//                 j++;
//             }else if(nums[i]>pivot){
//                 i++;
//             }else{
//                 swap(nums[i],nums[j]);
//                 i++;
//                 j++;
//             }          
//         }           
//         return nums;      
//     }
// };