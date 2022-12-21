// class Solution {
// public:
//     /**
//      * @param nums: a list of integer
//      * @return: return a integer, denote  the maximum number of consecutive 1s
//      */
//     int findMaxConsecutiveOnes(vector<int> &nums) {

//         int k = 1;
//         int i = -1;
//         int j =-1;
//         int ans=0;
//         int n = nums.size();

//         while(true){

//             bool f1 =false;
//             bool f2=false;
//             //acquire till valid zeros
//             while(i<n-1){
//                 f1=true;
//                 i++;
//                 if(nums[i]==0){
//                     k--;
//                 }

//                 if(k==0){
//                     ans=max(ans,i-j);
//                 }else if(k<0){
//                     break;
//                 }
//             }

//             //release till k becomes k>=0
//             while(j<i){
//                 f2=true;
//                 j++;
//                 if(nums[j]==0){
//                     k++;
//                     break;
//                 }

//             }

//             if(f1==false && f2==false){
//                 break;
//             }

//         }

//         return ans;


        
//     }
// };
