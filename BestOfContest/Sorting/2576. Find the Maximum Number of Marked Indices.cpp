// // 2576. Find the Maximum Number of Marked Indices

// class Solution {
// public:
//     int maxNumOfMarkedIndices(vector<int>& nums) {

//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         int i=0;
//         int mid = n/2;
//         int j = mid;
//         int ans=0;
//         cout<<i<<" "<<j;
//         while(i<mid && j<n){
//             if((2*nums[i])<=nums[j]){
//                 ans+=2;
//                 i++;
//             }
//             j++;
//         }
//         return ans;
        
//     }
// };