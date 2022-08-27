// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int lo = 0;
//         int hi = nums.size()-1;
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(target == nums[mid]){
//                 return mid;
//             }    
//             if(nums[mid] < nums[hi]){
//                 //mid to high region sorted
//                 if(target >= nums[mid] && target<=nums[hi]){
//                     //target will lie in sorted region
//                     lo=mid+1;
//                 }else{
//                     hi = mid-1;
//                 }
//             }else if(nums[mid] > nums[hi]){
//                 //lo to mid region is sorted
//                 if(target>=nums[lo] && target<=nums[mid]){
//                     //target will lie in sorted region
//                     hi = mid-1;
//                 }else{
//                     //target will lie in unsorted region
//                     lo = mid+1;
//                 }
//             }else{
//                 //this test case will most likely hit when ele is not present in the array
//                 hi--;
//             }
//         }
//         return -1;   
//     }
// };