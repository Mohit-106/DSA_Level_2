// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
        
//         unordered_map<int,int>mp;
//         mp[0]++;
//         int psum = 0;
//         int count = 0;
//         for(int i =0; i<nums.size();i++){
//             psum+=nums[i];
//             if(mp.find(psum-k)!=mp.end()){
//                 count+=mp[psum-k];
//             }
//             mp[psum]++;
//         }
//         return count;
        
//     }
// };
