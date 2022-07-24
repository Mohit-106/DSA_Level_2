
//minimum moves to make array equal ii
// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int i =0;
//         int j = nums.size()-1;
//         int res=0;
//         while(i<j){
//             res+=(nums[j]-nums[i]);
//             i++;
//             j--;
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