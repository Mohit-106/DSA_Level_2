// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {

//         int x=0;
//         unordered_map<int,int>mp;
//         mp[0]=-1;
//         int ans = 0;
//         for(int i = 0; i<nums.size(); i++){
//             if(nums[i] == 1){
//               x++;
//             }else{
//               x--;
//             }

//             if(mp.find(x)!=mp.end()){
//                  ans = max(ans,i-mp[x]);
//             }else{

//                 mp[x] = i;

//             }
//         }
//         return ans;

//     }
// };