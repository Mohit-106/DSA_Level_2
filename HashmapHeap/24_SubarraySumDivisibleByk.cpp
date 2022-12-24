// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {

//         unordered_map<int,int>mp;
//         mp[0]++;
//         int count=0;
//         int psum=0;

//         for(int i= 0; i<nums.size(); i++){
//             psum+=nums[i];
//             int rem = psum%k;
//              if(rem<0){
//                 rem+=k;
//             }
//             if(mp.find(rem)!=mp.end()){
//                 count+=mp[rem];
//             }
//             mp[rem]++;
//         }
//         return count;
        
//     }
// };