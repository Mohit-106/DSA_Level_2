// Intution 
// if tar > sum then it will take all arrays (tar/sum).
// then left elements can be form by 2 subarrays only.


// class Solution {
// public:
//     int minSizeSubarray(vector<int>& nums, int tar) {
        
//         int n = nums.size();
//         int ans=0;
        
//         long long sum=0;
//         for(int &val : nums){
//             sum+=val;
//         }
        
//         if(tar==sum) return n;
        
//         if(tar>sum){
//             ans= n*(tar/sum);
//             if(tar%sum==0) return ans;
//             tar = tar%sum;
//         }
//         int res=INT_MAX;
//         unordered_map<long long ,int>mp;
//         long long psum=0;
//         mp[0] = -1;
//         for(int i=0; i<n; i++){
//             psum+=nums[i];
//             if(mp.find(psum-tar)!=mp.end()){
//                 res = min(res,i-mp[psum-tar]);
//             }
//             mp[psum]=i;
//         }
    
//         for(int i=n; i<2*n; i++){
//             int j = i%n;
//             psum+=nums[j];
//             //cout<<i<<" "<<j<<endl;
//             //cout<<res<<endl;
//             if(mp.find(psum-tar)!= mp.end()){
//                 res = min(res,i-mp[psum-tar]);
//             }
//             mp[psum]=i;
//         }
        
//         if(res==INT_MAX) return -1;
        
//         return ans+res;
        
//     }
// };


