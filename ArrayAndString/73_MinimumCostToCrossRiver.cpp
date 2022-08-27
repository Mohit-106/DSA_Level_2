// //https://www.geeksforgeeks.org/find-the-minimum-cost-to-cross-the-river/
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int cand1 = 0;
//         int cnt1 = 0;
//         int cand2 = 0;
//         int cnt2 = 0;
//         for(int val : nums){
//             if(val == cand1){
//                 cnt1++;
//             }else if(val==cand2){
//                 cnt2++;
//             }else if(cnt1==0){
//                 cand1 = val;
//                 cnt1++;
//             }else if(cnt2==0){
//                 cand2 = val;
//                 cnt2++;
//             }else{
//                 cnt1--;
//                 cnt2--;
//             }
//         }
        
//         cnt1=0;
//         cnt2=0;
//         vector<int>ans;
//         for(int val : nums){
//             if(val==cand1){
//                 cnt1++;
//             }else if(val==cand2){
//                 cnt2++;
//             }
//         }
//         cout<<cand1<<cand2<<endl;
//         if(cnt1 > n/3){
//             ans.push_back(cand1);
//         }
//         if(cnt2 > n/3){
//             ans.push_back(cand2);
//         }
        
//         return ans;
        
//     }
// };