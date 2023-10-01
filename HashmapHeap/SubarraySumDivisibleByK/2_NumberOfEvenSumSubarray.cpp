// class Solution{   
// public:
//     long long countEvenSum(int nums[], int n) {
//         int psum=0;
//         int oddSum=0;
//         int evenSum=0;
//         long long  ans=0;
//         for(int i=0; i<n; i++){
//             psum+=nums[i];
//             if(psum%2==0){
//                 ans=ans+evenSum+1;
//                 evenSum++;
//             }else{
//                 ans=ans+oddSum;
//                 oddSum++;
//             }
//         }
//         return ans;
//     }
// };