// class Solution
// {
//     public:
//     long long countKdivPairs(int nums[], int n, int k)
//     {
//         long long ans=0;
//         unordered_map<int,int>mp;
//         for(int i=0; i<n;i++){
//             int rem = nums[i]%k;
//             if(rem!=0){
//                 ans+=mp[k-rem];
//             }else{
//                 ans+=mp[0];
//             }
//             mp[rem]++;
//         }
        
//         return ans;
    
//     }
// };