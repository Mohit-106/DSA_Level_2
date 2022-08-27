//Sorted area help us to identify wether element is in the range or not
//So we first need to identify the sorted region so that we can partition the array...

// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         //try to search in sorted region
//         //Find which posrtion of the array is sorted
//         int lo = 0;
//         int hi = nums.size()-1;
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(nums[mid]==target){
//                 return true;
//             }
//             if(nums[mid] > nums[hi]){
//                 //low to mid is sorted
//                 if(nums[lo]<=target && nums[mid]>=target){
//                     hi=mid-1;
//                 }else{
//                     lo = mid+1;
//                 }
//             }else if(nums[mid] < nums[hi]){
//                 //mid to high is sorted
//                 if(nums[mid]<=target && nums[hi]>=target){
//                     lo = mid+1;
//                 }else{
//                     hi = mid-1;
//                 }
//             }else{
//                 hi--;
//             }
//         }
//         return false;
        
//     }
// };