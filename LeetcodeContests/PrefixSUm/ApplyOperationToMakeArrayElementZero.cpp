
// // Sliding window

// class Solution{
// public:
//     int maximumBeauty(vector<int>& nums, int k){

//         sort(nums.begin(),nums.end());

//         int i=0;
//         int j=0;
//         int n = nums.size();

//         int ans=0;

//         while(i<n){

//             //acquire and collect ans

//             while(i<n){
//                 if(nums[i]-k-nums[j]-k <=0) ans=max(ans,(i-j+1));
//                 if(nums[i]-k-nums[j]-k > 0) break;
//                 i++;
//             }

//             while(i<n && j<i){
//                 if(nums[i]-k-nums[j]-k <=0) break;
//                 j++;
//             }

//         }

//         return ans;



//     }
// };