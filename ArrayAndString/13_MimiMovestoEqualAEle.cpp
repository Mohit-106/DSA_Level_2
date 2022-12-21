
//minimum moves to make array equal ii
// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         //Step 1 decide what is your target
//         //Make all element equal target(median)
//         //If we take median then delta from all the elements will we minimised
//         sort(nums.begin(), nums.end());
//         int median  = nums[(nums.size()-1)/2];
//         int res = 0;
//         for(int i =0 ; i<nums.size(); i++){
//             res += abs(median-nums[i]);
//         }
//         return res;
        
//     }
// };




// Mimimum moves to make array equal i
// we can increment n-1 elements at a time 
// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         int res=0;
//         for(int i=nums.size()-1;i>=0;i--){
//             res+= nums[i]-nums[0];
//         }
//         return res;
        
//     }
// };