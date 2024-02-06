// > 2874. Maximum Value of an Ordered Triplet II
// class Solution {
// public:
//     long long maximumTripletValue(vector<int>& nums) {
        
       
//         int n =  nums.size();
        
//         vector<int>rm(n);
//         rm[n-1] = -1;
//         long long ans=0;
        
//         for(int i=n-2; i>0; i--){
//             rm[i] = max(rm[i+1],nums[i+1]);
//             //cout<<rm[i]<<endl;
//         }
        
//         int lm = nums[0];
//         for(int i=1; i<n-1; i++){
//             long long val =(lm-nums[i]);
//             val*=rm[i];
//             ans = max(ans,val);
//             lm=max(lm,nums[i]);
//             //cout<<ans<<endl;
//         }
        
//         return ans;
    
//     }
// };