// class Solution {
// public:
//     bool isPossibleDivide(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         unordered_map<int,int>mp;
//         for(int val : nums){
//             mp[val]++;
//             cout<<val<<" ";
//         } 
//         for(int val : nums){
//             if(mp[val]==0) continue;
//             for(int i = val; i<val+k;i++){
//                 if(mp[i]>0){
//                     mp[i]--;
//                 }else{
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };