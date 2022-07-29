// class Solution
// {
// public:
//     int maxProduct(vector<int> &nums)
//     {

//         int prod = 1;
//         int ans = INT_MIN;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             prod *= nums[i];
//             ans = max(ans, prod);
//             if (prod == 0)
//             {
//                 prod = 1;
//             }
//         }

//         prod = 1;

//         for (int i = nums.size() - 1; i >= 0; i--)
//         {
//             prod *= nums[i];
//             ans = max(ans, prod);

//             if (prod == 0)
//             {
//                 prod = 1;
//             }
//         }

//         return ans;
//     }
// };

//Approach --> 2
// class Solution {
//     public int maxProduct(int[] nums) {
//         int res = nums[0];
//         int max = nums[0];
//         int min = nums[0];
        
//         for(int i = 1; i < nums.length; i++){
//             if(nums[i] >= 0){
//                 max = Math.max(max * nums[i], nums[i]);
//                 min = Math.min(min * nums[i], nums[i]);
//             } else {
//                 int temp = max;
//                 max = Math.max(min * nums[i], nums[i]);
//                 min = Math.min(temp * nums[i], nums[i]);
//             }
            
//             res = Math.max(res, max);
//         }
        
//         return res;
//     }
// }