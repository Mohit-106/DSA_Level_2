
// //Quick Select Approach
// class Solution {
// public:
//     int partiton(vector<int>&nums, int pivot){
//         int i = 0;
//         int j = 0;
//         while(i<nums.size()){
//             if(nums[i]<=pivot){
//                 swap(nums[i],nums[j]);
//                 i++;
//                 j++;
//             }else{
//                 i++;
//             }
//         }
//         return j-1;
//     }
//     int QuickSelect(vector<int>&nums,int lo, int hi, int idx){        
//         int pidx = partiton(nums,nums[hi]);
//         if(pidx == idx){
//             return nums[pidx];
//         }
//         if(pidx > idx){
//             return QuickSelect(nums,lo,pidx-1,idx);
//         }else{
//             return QuickSelect(nums,pidx+1,hi,idx);
//         }
//     }
//     int findKthLargest(vector<int>& nums, int k) {
//         return QuickSelect(nums,0,nums.size()-1,nums.size()-k);
//     }
// };


//Heap Approach
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int,vector<int>,greater<int>>pq;
//         for(int i = 0; i<k;i++){
//             pq.push(nums[i]);
//         }
        
//         for(int i = k;i<nums.size();i++){
//             if(nums[i]>pq.top()){
//                 pq.pop();
//                 pq.push(nums[i]);
//             }
//         }
//         return pq.top();
//     }
// };