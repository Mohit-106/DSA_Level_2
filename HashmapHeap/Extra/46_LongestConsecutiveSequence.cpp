// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         unordered_map<int,bool>mp;
//         for(int val : nums){
//             mp[val] = true;
//         }

//         for(int val : nums){
//             if(mp.find(val-1)!=mp.end()){
//                 mp[val] = false;
//             }
//         }
//         //now only those elements left which can be starting point
//         int ans = 0;
//         for(int val : nums){
//             if(mp[val]==true){
//              int res = 0;
//              int i = 1;
//              while(mp.find(val+i)!=mp.end()){
//                 res++;
//                 i++;
//              }
//              ans = max(ans,i);
//             }
           
//         }
//         return ans;
        
//     }
// };
