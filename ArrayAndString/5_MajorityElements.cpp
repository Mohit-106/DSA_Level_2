// https://leetcode.com/problems/majority-element/

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         int me = nums[0];
//         int cnt = 1;
//         for(int i=1;i<nums.size();i++){
            
//             if(nums[i]==me){
//                 cnt++;
//             }else if(nums[i]!=me){
//                 cnt--;
//             }
            
//             if(cnt==0){
//                 me=nums[i];
//                 cnt++;
//             }
//         }
        
//         return me;
        
//     }
// };