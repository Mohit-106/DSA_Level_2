// 3012. Minimize Length of Array Using Operations

// Very Good questions

// Hint => minimum will consume all

// class Solution {
// public:
//     int minimumArrayLength(vector<int>& nums) {

//         int minele = INT_MAX;
//         for(int &val : nums){
//             minele = min(minele,val);
//         }

//         int freq = 0;

//         for(int &val : nums){
//             if(val==minele) freq++;
//         }

//         if(freq==1) return 1;
//         int nmin = INT_MAX;
//         for(int &val : nums){
//             if(val!=minele){
//                 int n = val%minele;
//                 if(n!=0 && minele > n){
//                     return 1;
//                 }
//             }
//         }

//         int ans = ceil(freq/2.0);
//         return ans;


        
//     }
// };