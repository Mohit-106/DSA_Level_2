// class Solution {
// public:
//     int findNumberOfLIS(vector<int>& nums) {

//         int n = nums.size();
//         vector<int>dp(n);
//         dp[0]=1;
//         vector<int>nolis(n);
//         nolis[0]=1;
//         int lis = 1;
        
//         for(int i=1; i<n; i++){
//             int maxlen = 0;
//             int count = 0;
//             for(int j = i-1; j>=0; j--){
//                 if(nums[i]>nums[j]){
//                     if(dp[j]>maxlen){
//                         maxlen = dp[j];
//                     }
//                 }
//             }

//             for(int j = i-1; j>=0; j--){
//                 if(nums[i]>nums[j]){
//                     if(dp[j]==maxlen){
//                         nolis[i]+=nolis[j];
//                     }
//                 }
//             }

//             if(nolis[i]==0){
//                 nolis[i]=1;
//             }

            
//             dp[i]=maxlen+1;
            
//             if(dp[i]>lis){
//                 lis= dp[i];
//             }

//         }
//         cout<<"lis"<<" "<<lis<<endl;
//         int ans=0;
//         bool flag = false;
//         for(int i=0; i<n; i++){
//             cout<<dp[i]<<" "<<nolis[i]<<endl;
//             if(nums[i]!=nums[0]){
//                 flag = true;
//             }
//             if(dp[i]==lis){
//                 ans+=nolis[i];
//             }
//         }

//         if(flag==false){
//             return nums.size();
//         }


//         return ans;
        
//     }
// };