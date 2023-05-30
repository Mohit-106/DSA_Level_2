// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         long long bmask = 1LL;
//         long long ans=0LL;
//         for(int i=0; i<=32; i++){
//             long long tbmask = bmask<<i;
//             int count=0;
//             for(int val : nums){
//                 if((tbmask & val) != 0){
//                      count++;
//                 }
//             }
//             if(count%3!=0){
//                 long long pans = 1LL<<i;
//                 ans = (ans|pans);
//             }
//             cout<<"count-> "<<count<<" "<<"ans-> "<<ans<<endl;
//         }
//         return ans;
//     }
// };