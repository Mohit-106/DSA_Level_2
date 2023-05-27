//Properties of xor
// For decimal
//1. x^x = 0 
//2. x^0=x

//For binary
//1. x^1 = ~x
//2. x^0 = x

// a^b^c^d = b^c^d^a
// Xor is same like we add numbers

//------------------------------------------------------------------------------------------------------------//

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int unum = nums[0];
//         for(int i=1; i<nums.size();i++){
//             unum^=nums[i];
//         }
//         return unum;
//     }
// };