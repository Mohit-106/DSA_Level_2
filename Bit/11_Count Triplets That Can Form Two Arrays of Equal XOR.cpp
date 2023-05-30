// class Solution {
// public:
//     int countTriplets(vector<int>& arr) {
//         int ans = 0;
//         for(int i=0; i<arr.size()-1; i++){
//             int val = arr[i];
//             for(int j=i+1; j<arr.size();j++){

//                 val^=arr[j];

//                 if(val==0){
//                     ans+=(j-i);
//                 }

//             }

//         }

//         return ans;

        
//     }
// };