// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int i=0,j=nums.size()-1,k=nums.size()-1;
//         vector<int>res(nums.size());
//         while(i<=j){
//             int val1 = nums[i]*nums[i];
//             int val2 = nums[j]*nums[j];
//             res[k--]=max(val1,val2);
//             if(val1>val2){
//                 i++;
//             }else{
//                 j--;
//             }   
//         }
//         return res;
        
//     }
// };