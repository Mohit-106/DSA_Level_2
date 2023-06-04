// class Solution {
// public:

//     class Pair{
//         public:
//         int idx;
//         int len;
//         int val;
//         string psf;

//         Pair(int idx, int len , int val, string psf){
//             this->idx = idx; this->len=len; this->val=val; this->psf=psf;
//         }



//     };

    

//     int findNumberOfLIS(vector<int>& nums) {

//         vector<int>dp(nums.size());
//         dp[0] =1;
//         vector<int>idx;
//         int lis=1;
       
//         for(int i=1; i<nums.size(); i++){
//             int maxlen = 0;
//             for(int j=i-1; j>=0; j--){
//                 if(nums[i]>nums[j]){
//                     maxlen = max(maxlen,dp[j]);
//                 }
//             }
//             dp[i] = maxlen+1;
//             if(dp[i] >= lis){
//                 lis=dp[i];
//                 idx.push_back(i);
//             } 
//         }

//         int flag = false;
//         for(int i=0; i<dp.size(); i++){
//             if(dp[i]!=1){
//                 flag = true;
//                 continue;
//             }
//         }
//         if(flag==false){
//             return dp.size();
//         }

//        int ans=0;
//         queue<Pair*>q;
//         for(int i=0; i<idx.size();i++){
//              q.push(new Pair(idx[i],lis,nums[idx[i]],to_string(nums[idx[i]])));
//         }
       

//         while(q.size()>0){

//             Pair * rem = q.front();
//             q.pop();
//             if(rem->len==1){
//                 cout<<rem->psf<<endl;
//                 ans++;
//                 continue;
//             }

//             for(int i=rem->idx-1; i>=0; i--){
//                 if(rem->len-1==dp[i] && nums[rem->idx]>nums[i]){
//                     q.push(new Pair(i,rem->len-1,nums[i],to_string(nums[i])+rem->psf));
//                 }
//             }

//         }

//         return ans;
//     }
// };